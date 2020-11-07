
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_arraysize(char const *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (n);
}

int ft_arrayalloc(char const *s, char c, char **words)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = i;
		if (s[j] != c && s[j] != '\0')
			while (s[j] != c && s[j] != '\0')
				j++;
		words[k] = malloc(sizeof(**words) * (j - i + 1));
		i = j;
		if (words[k] == 0)
			return (0);
		k++;
		while (s[i] == c)
			i++;
	}
	words[k] = NULL;
	return (1);
}

char **ft_split(char const *s, char c)
{
	char **words;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (ft_arraysize(s, c) == 0)
		return (0);
	words = malloc(sizeof(*words) * (ft_arraysize(s, c) + 1));
	if (words == 0 || ft_arrayalloc(s, c, words) == 0)
		return (0);
	while (s[i] != '\0')
	{
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
		k = 0;
	}
	return (words);
}

/* int main(int argc, char **argv) */
/* { */
/* 	(void)argc; */
/* 	char **words; */
/* 	int i = 0; */
/* 	words = ft_split(argv[1], argv[2][0]); */
/* 	while (words[i]) */
/* 	{ */
/* 		printf("%s|", words[i]); */
/* 		i++; */
/* 	} */
/* } */
