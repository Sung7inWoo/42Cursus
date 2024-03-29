/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:21:00 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:21:01 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_lstmap creat a new list.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*tmp;

	if (!(lst) || (!(f)) || (!(del)))
		return (NULL);
	tmp = NULL;
	while (lst)
	{
		newnode = ft_lstnew((*f)(lst->content));
		if (!(newnode))
			ft_lstdelone(newnode, del);
		ft_lstadd_back(&tmp, newnode);
		lst = lst->next;
	}
	return (tmp);
}
