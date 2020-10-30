#include <stdio.h>

int ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_isalpha(argv[1][0]));
}
