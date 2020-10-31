#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*src_true;
	int			i;

	i = 0;
	dest = dst;
	src_true = src;
	while (len)
	{
		dest[i] = src_true[i];
		i++;
		len--;
	}
	return (dest);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_memmove(argv[1], argv[2], 5));
}
