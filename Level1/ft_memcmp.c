/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:18:34 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 16:00:54 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The memcmp() function compares byte string s1 against byte string s2.  Both strings are
     assumed to be n bytes long.
RETURN The memcmp() function returns zero if the two strings are identical, otherwise returns
     the difference between the first two differing bytes (treated as unsigned char values, so
     that `\200' is greater than `\0', for example).  Zero-length strings are always identi-
     cal.  This behavior is not required by C and portable code should only depend on the sign
     of the returned value.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}