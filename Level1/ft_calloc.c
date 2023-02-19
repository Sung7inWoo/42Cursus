/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:43:41 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 15:55:15 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The calloc() function contiguously allocates enough space for count objects that are size
     bytes of memory each and returns a pointer to the allocated memory.  The allocated memory
     is filled with bytes of value zero.
RETURN If successful,functions return a pointer to allocated memory.  If there is an error, they return a NULL
     pointer
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!(ptr))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}