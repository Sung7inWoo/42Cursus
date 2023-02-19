/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:03:42 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 16:14:43 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The memchr() function locates the first occurrence of c (converted to an unsigned char)
     in string s.
RETURN The memchr() function returns a pointer to the byte located, or NULL if no such byte
     exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	i = 0;
	ptr = (unsigned char *)str;
	if (n <= 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}