/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:52:22 by hani              #+#    #+#             */
/*   Updated: 2023/02/17 03:02:55 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	const char	*ptr;
	int	len_s;
	int	i;

	i = 0;
	ptr = str;
	len_s = ft_strlen(str);
	if (c == '\0')
		return (NULL);
	while (*ptr)
	{
		if (*(ptr + (len_s - i)) == c)
			return (&ptr);
		i++;
	}
	return (NULL);
}