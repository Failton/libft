#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", memcmp("atoms\0\0\0\0", "atoms\0abc", 8));
}
