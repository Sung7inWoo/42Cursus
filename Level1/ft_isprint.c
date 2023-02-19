/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:17:36 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/19 15:59:24 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	 The isprint() function tests for any printing character, including space (` ').  The
     value of the argument must be representable as an unsigned char.
RETURN The isprint() function returns zero if the character tests false and returns non-zero if
     the character tests true.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
