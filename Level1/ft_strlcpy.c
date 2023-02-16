/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:07:58 by hani              #+#    #+#             */
/*   Updated: 2023/02/17 01:27:18 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src,size_t destsize)
{
	int	len_s;

	len_s = ft_strlen(src);
	if (destsize <= 1)
		return (len_s);
	while (*src && (destsize - 1 > 0))
	{
		*dest++ = *src++;
		destsize--;
	}
	*dest = '\0';
	return (len_s);
}