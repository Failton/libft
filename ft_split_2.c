#include <stdio.h>
#include "libft.h"

int ft_arraysize(char const *s, char c)
{
	int i;
	int n;
	int flag;

	i = 0;
	n = 2;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			flag = 1;
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		while (s[i] == c)
			i++;
	}
	if (flag == 1)
		n--;
	return (n);
}

int ft_allocword(char const *s, char c, char ***words)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		words[0][k] = malloc(sizeof(char) * (j - i + 1));
		i = j;
		if (words[0][k] == 0)
			return (k);
		k++;
	}
	words[0][k] = malloc(sizeof(char) * 1);
	words[0][k] = NULL;
	return (-1);
}

int 	ft_alloc(char const *s, char c, char ***words)
{
	int alloc;

	*words = malloc(sizeof(char*) * (ft_arraysize(s, c)));
	if (words == 0)
	{
		free(*words);
		return (0);
	}
	if (ft_arraysize(s, c) == 0 || !s)
		return (0);
	alloc = ft_allocword(s, c, words);
	if (alloc >= 0)
	{
		while (alloc <= 0)
		{
			free(words[0][alloc]);
			alloc--;
		}
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	s = ft_strtrim(s, &c);
	if (ft_alloc(s, c, &words) == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			words[j][k] = s[i];
			printf("%c|", words[j][k]);
			k++;
			i++;
		}
		words[j][k] = '\0';
		j++;
		while (s[i] == c)
			i++;
	}
	return (words);
}
int main()
{
	char **words;
	char c[36] = "  split   this for   me  !   ";
	int i = 0;
	words = ft_split(c, ' ');
	/* while (words[i]) */
	/* { */
	/* 	printf("%s|\n", words[i]); */
	/* 	i++; */
	/* } */

	while (words[i])
	{
		printf("%s|\n", words[i]);
		i++;
	}
//	printf("%s\n", words[5]);
}
