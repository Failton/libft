/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruthann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 11:10:30 by pruthann          #+#    #+#             */
/*   Updated: 2020/07/31 23:21:53 by pruthann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*newsrc;
	char	*temp;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	newsrc = malloc((len + 1) * sizeof(*src));
	if (newsrc == 0)
		return (NULL);
	temp = newsrc;
	while (*src)
	{
		*newsrc = *src;
		newsrc++;
		src++;
	}
	*newsrc = '\0';
	return (temp);
}
