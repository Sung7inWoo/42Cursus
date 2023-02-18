/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:33:45 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 01:01:33 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,const void *src, size_t n)
{
	char	*ptr_d;
	char *ptr_s;

	if (src == NULL && dest == NULL)
		return (dest);
	ptr_d = (char *)dest;
	ptr_s = (char *)src;
	while (n-- > 0)
		*(ptr_d++) = *(ptr_s++);
	return (dest);
}