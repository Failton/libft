
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*str;
	const char	*src_true;

	str = dest;
	src_true = src;
	while (n)
	{
		*str = *src_true;
		if (*src_true == c)
			return (str + 1);
		n--;
		src_true++;
		str++;
	}
	return (0);
}
