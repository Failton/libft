#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char		*str;
	const char	*src2;

	if (dst == NULL && src == NULL)
        return (dst);
	i = 0;
	str = dst;
	src2 = src;
	while (n)
	{
		str[i] = src2[i];
		i++;
		n--;
	}
	return (str);
}
