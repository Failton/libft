
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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	unsigned int i;

	i = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(*str) * (len + 1));
	if (str == 0)
		return (0);
	if (start >= ft_strlen(s))
		str[i] = '\0';	
	else
		while (s[start] && len != i)
			{
				str[i] = s[start];
				i++;
				start++;
			}
	str[i] = '\0';	
	return (str);
}

int main(int argc, char **argv)
{
	char *a;
	(void)argc;
	a = ft_substr(argv[1], 5, 10);
	printf("%s\n", a);
}
