#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	unsigned int total;
	char *s;

	total = count * size;
	s = malloc(total);
	if (s == 0)
		return (0);
	while (total)
	{
		s[total - 1] = 0;
		total--;
	}
	return (s);
}
