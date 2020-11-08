
#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int len;
	char *str;
	unsigned int i;

	if (!s)
		return (0);
	len = ft_strlen(s);
	str = malloc(sizeof(*str) * (len + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
