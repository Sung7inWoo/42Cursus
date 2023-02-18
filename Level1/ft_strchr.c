/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:28:32 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 21:42:45 by hani             ###   ########.fr       */
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
		return (&ptr[ft_strlen(str)]);
	while (ptr[i])
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}