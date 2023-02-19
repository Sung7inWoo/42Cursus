/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:23:45 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 15:52:22 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does
     nothing.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n-- > 0)
		*ptr++ = '\0';
}