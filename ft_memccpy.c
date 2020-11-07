
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str;
	const unsigned char	*src_true;
	unsigned char sign;

	str = dst;
	src_true = src;
	sign = (unsigned char)c;
	while (n)
	{
		*str = *src_true;
		if (*src_true == sign)
			return (str + 1);
		n--;
		src_true++;
		str++;
	}
	return (0);
}
