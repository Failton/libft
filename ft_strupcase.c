/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruthann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 18:33:47 by pruthann          #+#    #+#             */
/*   Updated: 2020/07/26 11:32:20 by pruthann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			str[i] = str[i] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char a[9] = "qJuGkBJhk";
	printf("%s", ft_strupcase(a));
}
