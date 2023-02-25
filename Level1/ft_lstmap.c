/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 02:15:23 by hani              #+#    #+#             */
/*   Updated: 2023/02/25 03:50:53 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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