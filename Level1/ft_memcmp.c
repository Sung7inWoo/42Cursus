/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:18:34 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 14:13:28 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int	res;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	res = 0;
	if (*ptr1 == *ptr2)
		return (0);
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
			res = (*ptr1 - *ptr2);
	}
	return (res);
}