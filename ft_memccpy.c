#include <stdio.h>
#include <unistd.h>

void putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
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

int main()
{
	char a[15] = "1234567890";
	char b[15] = "qwertyuiop";
	char *c;
	c = ft_memccpy(a, b, 'q', 50);
	printf("%s", c);
}
