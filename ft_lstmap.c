/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruthann <pruth@student.21-school.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:19:25 by pruthann          #+#    #+#             */
/*   Updated: 2020/11/15 17:23:11 by pruthann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp_lst;
	t_list	*newlst;

	if (!lst)
		return (0);
	newlst = ft_lstnew(f(lst->content));
	temp = newlst;
	temp_lst = lst;
	temp_lst = temp_lst->next;
	newlst = newlst->next;
	while (temp_lst)
	{
		newlst = ft_lstnew(f(temp_lst->content));
		if (newlst == 0)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		temp_lst = temp_lst->next;
		newlst = newlst->next;
	}
	return (temp);
}
