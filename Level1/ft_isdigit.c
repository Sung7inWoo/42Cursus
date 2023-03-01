/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:16:12 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/28 20:37:23 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_isdigit test every caracteres if they are digit in ASCII table.
	Return 0 if the characters test is false.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c > 47 && c < 58);
}
