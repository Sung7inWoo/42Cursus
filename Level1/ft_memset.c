/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:21:44 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:21:45 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_memset writes len bytes of value c to the string s.
	Returns its first argument.
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
