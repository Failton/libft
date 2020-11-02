#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char a[20] = "qwertyuiop";
	char b[10] = "asd";
	unsigned long i;
	i = strlcat(a, b, 12);
	printf("%s | %lu | %s\n", a, i, b);
}
