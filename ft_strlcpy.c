
#include <stdio.h>
#include <string.h>

static size_t   ft_strlen(const char *s)
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

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;

	i = 0;
	if (!dst)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	while (dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* int main () */
/* { */
/* 	char a[15] = "qwertyuiop"; */
/* 	char b[4]; */
/* 	char c[15] = "qwertyuiop"; */
/* 	char d[4]; */
/* 	int n; */
/* 	int k; */
/*  */
/* 	n = strlcpy(b, a, 0); */
/* 	k = ft_strlcpy(d, c, 0); */
/* 	printf("%s %d\n%s %d\n", b, n, d, k); */
/* } */
