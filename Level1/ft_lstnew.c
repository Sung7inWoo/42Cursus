/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:06:58 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/25 21:36:36 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_lstnew creat a new node with the new content send in argument.
	Return the pointer to the content with malloc memory allocated.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = NULL;
	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode != NULL)
	{
		newnode->content = content;
		newnode->next = NULL;
	}
	return (newnode);
}
