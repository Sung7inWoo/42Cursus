/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:33:45 by hani              #+#    #+#             */
/*   Updated: 2023/02/15 23:24:01 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,const void *src, size_t n)
{
	char	*ptr_d;
	const char *ptr_s;

	ptr_d = dest;
	ptr_s = src;
	while (n-- > 0)
		*ptr_d++ = *ptr_s++;
	return (dest);
}