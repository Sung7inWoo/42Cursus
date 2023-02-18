/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:01:00 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/18 20:24:26 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*if_len_neg(const char *str, const char *to_search)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_search[j] && (!(to_search[j])))
			j++;
		if (to_search[j] && ((str[i] == to_search[0] && str[i + j] == to_search[j])))
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *str, const char *to_search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_search[i] == '\0')
		return ((char *)str);
	if (str[i] == '\0')
		return (NULL);
	if (len < 0)
		return (if_len_neg(str, to_search));
	while (str[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && str[i + j] && to_search[j] && str[i + j] == to_search[j])
			j++;
		if (j == ft_strlen(to_search))
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}