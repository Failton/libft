/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruthann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:36:40 by pruthann          #+#    #+#             */
/*   Updated: 2020/07/26 20:36:22 by pruthann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
	
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp_haystack;
	char	*temp_needle;
	char	*haystack_iter;
	int	temp_len;

	if (!(*needle))
		return ((char *)haystack);
	temp_needle = (char *)needle;
	haystack_iter = (char *)haystack;
	while (*haystack_iter && len)
	{
		temp_len = len;
		temp_haystack = haystack_iter;
		while (*(temp_haystack++) == *(temp_needle++) && len)
		{
			if (!(*temp_needle))
				return (haystack_iter);
			len--;
		}
		temp_needle = (char *)needle;
		haystack_iter++;
		len = temp_len;
		len--;
	}
	return (0);
}
