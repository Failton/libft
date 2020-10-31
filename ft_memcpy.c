#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char		*str;
	const char	*src2;

	i = 0;
	str = dest;
	src2 = src;
	while (n)
	{
		str[i] = src2[i];
		i++;
		n--;
	}
	return (str);
}
