
char *ft_strrchr(const char *s, int c)
{
	char smbl;
	char *str;
	int len;

	len = 0;
	smbl = (char)c;
	str = (char*)s;
	while (str[len])
		len++;
	if (str[len] == smbl)
		return (&str[len]);
	while (len)
	{
		if (str[len - 1] == smbl)
			return (&str[len - 1]);
		len--;
	}
	return (0);
}
