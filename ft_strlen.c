/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruthann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 17:40:11 by pruthann          #+#    #+#             */
/*   Updated: 2020/07/24 18:26:48 by pruthann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
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

int main(int argc, char **argv)
{
	(void)argc;
	printf("%ld\n", ft_strlen(argv[1]));
}
