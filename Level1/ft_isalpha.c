/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:15:55 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/19 15:56:33 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The isalpha() function tests for any character for which isupper(3) or islower(3) is
     true.  The value of the argument must be representable as an unsigned char
RETURN The isalpha() function returns zero if the character tests false and returns non-zero if
     the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
