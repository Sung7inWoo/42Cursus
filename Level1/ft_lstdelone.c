/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:20:41 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:20:42 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_lstdelone pass the node content pointed by lst
	in function pointed by del,
	and free the memory of this node.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!(lst) || (!(del)))
		return ;
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
