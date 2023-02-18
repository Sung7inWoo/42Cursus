/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:01:00 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/18 16:46:06 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_search[0] == '\0')
		return ((char *)str);
	while (i < len)
	{
		j = 0;
		while (str[i + j] == to_search[j] && (!(to_search[i])))
		{
			j++;
		}
		if (to_search[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}