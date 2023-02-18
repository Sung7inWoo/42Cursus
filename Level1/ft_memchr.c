/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:03:42 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 13:40:55 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (*(ptr + i) == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}