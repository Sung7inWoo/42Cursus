/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:17:49 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/25 22:00:23 by jthanikp         ###   ########.fr       */
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
	size_t	len_s;
	size_t	len_d;
	size_t	i;
	size_t	j;

	len_s = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (len_s);
	len_d = ft_strlen(dest);
	if (size <= len_d)
		return (len_s + size);
	i = 0;
	j = ft_strlen(dest);
	while (src[i] && j < (size - 1))
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (len_d + len_s);
}
