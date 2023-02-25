/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:35:35 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/24 21:41:09 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	-while (lst) iterates until the last node of linked list.
	but it's gonna point to "temp lst"!!!
	-Unlike while (lst->next) it'll iterate till the second to last node
	and point to the last node.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!(lst))
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}