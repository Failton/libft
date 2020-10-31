#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char c_true;
	const char *src;

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

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_memchr(argv[1], (int)argv[2][0], argv[3][0] - 48));
}
