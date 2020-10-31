#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*src_true;

	dest = dst;
	src_true = src;
	while (len)
	{
		dest[len - 1] = src_true[len - 1];
		len--;
	}
	return (dest);
}

int main()
{
	char a[10] = "qwerty";
	ft_memmove(a + 1, a, 3);
	printf("%s", a);
}
