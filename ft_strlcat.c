
#include <stdio.h>

static size_t	ft_strlen(const char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		s = s + 1;
		len++;
	}
	return (len);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *temp_dst;
	char *temp_src;
	unsigned int temp_dstsize;
	unsigned int len;

	len = ft_strlen(dst) + ft_strlen(src);
	temp_dst = dst;
	temp_src = (char *)src;
	temp_dstsize = dstsize;
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*temp_dst && temp_dstsize)
	{
		temp_dst++;
		temp_dstsize--;
	}
	while (*temp_src && temp_dstsize - 1)
	{
		*temp_dst = *temp_src;
		temp_src++;
		temp_dst++;
		temp_dstsize--;
	}
	*temp_dst = '\0';
	return (len);
}
