/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:28:32 by hani              #+#    #+#             */
/*   Updated: 2023/02/17 02:51:06 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *str, int c)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	if (c == '\0')
		return (NULL);
	while (*ptr)
	{
		if (*(ptr + i) == c)
			return (ptr);
	}
	return (NULL);
}