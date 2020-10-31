#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned	char	c_true;
	const		char	*src;

	src = (const char *)s;
	c_true = (unsigned char)c;
	while (n && src)
	{
		if (*src == c_true)
			return ((void *)src);
		src++;
		n--;
	}
	return (0);
}
