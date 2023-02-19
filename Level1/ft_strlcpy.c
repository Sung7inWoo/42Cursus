/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:07:58 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 16:12:19 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	the function ft_strlcpy copies up to dstsize -1 characteres
	from string src to dst.
	NUL-terminating the result if dstsize is not 0.
Returns the (ft_strlen) total lenght of the string src to create.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src,size_t destsize)
{
	size_t	len_s;

	len_s = ft_strlen(src);
	if (destsize < 1)
		return (len_s);
	while (*src && (destsize - 1 > 0))
	{
		*dest++ = *src++;
		destsize--;
	}
	*dest = '\0';
	return (len_s);
}