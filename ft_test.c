#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char c_unsingd;

	c_unsingd = (unsigned char)c;
	while (n || s)
	{
		if (*(const char*)s == c)
			return ((void*)s);
		s++;
		n--;
	}
	return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_memchr(argv[1], (int)argv[2], (int)argv[3]));
}
