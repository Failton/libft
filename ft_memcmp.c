#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	const	char	*str1;
	const	char	*str2;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && i < n)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
