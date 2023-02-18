/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:10:41 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 21:28:51 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_d;
	const char	*ptr_s;
	size_t	i;

	i = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	ptr_d = dest;
	ptr_s = src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (*ptr_s && i < n)
	{
		*(ptr_d + (n - i)) = *(ptr_s + (n - i));
		i++;
	}
	return (dest);
}