#include <stdio.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		s = s + 1;
		len++;
	}
	return (len);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;
	unsigned int len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(str) * len + 1);
	if (str == 0)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strjoin(argv[1], argv[2]));
}
