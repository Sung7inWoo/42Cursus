/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:28:32 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 14:43:45 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	if (c == '\0')
		return (NULL);
	while (*ptr)
	{
		if (*(ptr + i) == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}