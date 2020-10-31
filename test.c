#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", memchr(argv[1], (int)argv[2][0], argv[3][0] - 48));
}
