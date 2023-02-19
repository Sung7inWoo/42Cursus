/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:27:03 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 16:02:48 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The memset() function writes len bytes of value c (converted to an unsigned char) to the
     string b.
RETURN The memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n-- > 0)
		*ptr++ = (unsigned char) c;
	return (str);
}