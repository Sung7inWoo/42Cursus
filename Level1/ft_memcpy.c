/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:33:45 by hani              #+#    #+#             */
/*   Updated: 2023/02/16 18:32:16 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,const void *src, size_t n)
{
	char	*ptr_d;
	const char *ptr_s;

	if (src == NULL && dest == NULL)
		return (dest);
	ptr_d = dest;
	ptr_s = src;
	while (n-- > 0)
		*(ptr_d++) = *(ptr_s++);
	return (dest);
}