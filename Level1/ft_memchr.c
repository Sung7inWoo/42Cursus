/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 03:03:42 by hani              #+#    #+#             */
/*   Updated: 2023/02/17 03:34:32 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	int	i;

	i = 0;
	ptr = str;
	if (n <= 0)
		return (NULL);
	while (n-- > 0)
	{
		if (*(ptr + i) == c)
			return (&str[i]);
	}
	return (NULL);
}