/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:33:45 by hani              #+#    #+#             */
/*   Updated: 2023/02/25 21:39:43 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_memcpy copies n bytes from memory area src to memory area dst.
	Return the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;

	if (src == NULL && dest == NULL)
		return (dest);
	ptr_d = (char *)dest;
	ptr_s = (char *)src;
	while (n-- > 0)
		*(ptr_d++) = *(ptr_s++);
	return (dest);
}
