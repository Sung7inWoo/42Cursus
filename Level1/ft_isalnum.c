/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:17:12 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/19 15:56:45 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is
     true.  The value of the argument must be representable as an unsigned char.
RETURN The isalnum() function returns zero if the character tests false and returns non-zero if
     the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
