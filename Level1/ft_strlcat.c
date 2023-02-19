/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:17:49 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/19 16:11:28 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_strlcat appends string src to the end of dst.
	It append at most dstsize - strlen(dst) - 1 characters and will NUL-terminate.
	Return length of dst + lenght of src.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	size_t	len_d;

	i = 0;
	j = ft_strlen(dest);
	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	if (size < 1)
		return (len_s + size);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size < len_d)
		return (len_s + size);
	return (len_s + len_d);
}
