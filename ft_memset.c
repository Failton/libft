/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruthann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:58:14 by pruthann          #+#    #+#             */
/*   Updated: 2020/10/28 12:12:35 by pruthann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	      i;
	unsigned char *str;

	i = 0;
	str = b;
	while (len != 0)
	{
		str[i] = c;
		len--;
		i++;
	}
	return (b);
}
