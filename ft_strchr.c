
char *ft_strchr(const char *s, int c)
{
	char smbl;
	char *str;

	smbl = (char)c;
	str = (char*)s;
	while (*str)
	{
		if (*str == smbl)
			return (str);
		str++;
	}
	if (*str == smbl)
		return (str);
	return (0);
}
