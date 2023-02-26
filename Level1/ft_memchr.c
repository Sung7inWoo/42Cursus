/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:21:13 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:21:15 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_memchr locates the first occurence of c in string s,
	search in no more than len characteres of in string s.
	Return a pointer to the byte located c.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)str;
	if (n <= 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
