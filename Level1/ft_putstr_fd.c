/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:32:52 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/25 21:43:55 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_putstr_fd use write to copy the string s
	in the file descriptor fd.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!(s))
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
