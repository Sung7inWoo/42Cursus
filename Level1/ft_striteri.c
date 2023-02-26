/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:22:35 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:22:36 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_striteri pass the function pointed by f
	to every characteres of the string s.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!(s))
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
