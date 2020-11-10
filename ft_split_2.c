#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_arraysize(char const *s, char c)
{
	int i;
	int n;
	int flag;

	i = 0;
	n = 1;
	flag = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			flag = 1;
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	if (flag == 1)
		n--;
	return (n);
}

int ft_allocword(char const *s, char c, char **words)
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
		if (s[i] != '\0')
		{
			words[k] = malloc(sizeof(**words) * (j - i + 1));
			k++;
		}
		i = j;
		if (words[k - 1] == 0)
			return (k - 1);
	}
	words[k] = NULL;
	return (-1);
}

int 	ft_alloc(char const *s, char c, char ***words)
{
	int alloc;

	*words = malloc(sizeof(**words) * (ft_arraysize(s, c) + 1));
	if (words == 0)
	{
		free(*words);
		return (0);
	}
	if (ft_arraysize(s, c) == 0 || !s)
		return (0);
	alloc = ft_allocword(s, c, *words);
	if (alloc >= 0)
	{
		while (alloc <= 0)
		{
			free(*words[alloc]);
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

int main(int argc, char **argv)
{
	char **words;
//	char c[36] = "  split   this for   me  !   ";
	int i = 0;
	(void)argc;
	words = ft_split(argv[1], argv[2][0]);
	while (words[i])
	{
		printf("%s|\n", words[i]);
		i++;
	}

	/* while (i < 2) */
	/* { */
	/* 	printf("%s|\n", words[i]); */
	/* 	i++; */
	/* } */
//	printf("%s\n", words[5]);
}
