/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:18:34 by hani              #+#    #+#             */
/*   Updated: 2023/02/17 03:41:33 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int	res;

	ptr1 = s1;
	ptr2 = s2;
	res = 0;
	if (*ptr1 == *ptr2)
		return (0);
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
			res = (*ptr1 > *ptr2)?1:-1;
	}
	return (res);
}