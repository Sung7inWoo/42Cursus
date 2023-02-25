/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:03:50 by hani              #+#    #+#             */
/*   Updated: 2023/02/25 21:33:42 by jthanikp         ###   ########.fr       */
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
