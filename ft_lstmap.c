/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:24:11 by anhuang           #+#    #+#             */
/*   Updated: 2017/11/21 16:34:38 by anhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*lst2_start;
	t_list		*lst2;

	if (lst)
	{
		lst2_start = f(lst);
		lst2 = lst2_start;
		while (lst->next)
		{
			lst = lst->next;
			lst2->next = f(lst);
			lst2 = lst2->next;
		}
	}
	else
		return (NULL);
	return (lst2_start);
}
