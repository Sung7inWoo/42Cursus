/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:10:41 by hani              #+#    #+#             */
/*   Updated: 2023/02/25 21:40:43 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_memmove copies len bytes from the string src to string dst.
	The two strings may overlap, the copy is always
	done in a non-destructive manner.
	Returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;

	ptr_d = (char *)dest;
	ptr_s = (char *)src;
	if (ptr_d == ptr_s || n == 0)
		return (ptr_d);
	else if (ptr_d > ptr_s && (ptr_s + n) > ptr_d)
	{
		while (n--)
			ptr_d[n] = ptr_s[n];
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
