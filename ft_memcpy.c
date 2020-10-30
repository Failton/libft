#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*str;
	char	*src2;

	i = 0;
	str = dest;
	src2 = src;
	while (n)
	{
		str[i] = src[i];
		i++;
		n--;
	}
	return (str);
}

int main()
{
	char a[15] = "1234567890";
	char b[10] = "qwertyuiop";
	printf("%s %s\n", a, b);
	memcpy(a, b, 5);
	printf("%s %s\n", a, b);
}
