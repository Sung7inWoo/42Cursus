/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:20:02 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:20:05 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_calloc allocates enough space for count objects
	that are size bytes of memory,
	each is filled with bytes of value zero.
	Return a pointer to allocated memory.
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
