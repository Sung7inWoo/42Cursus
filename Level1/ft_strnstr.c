/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:01:00 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/21 16:46:26 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*if_len_neg(const char *str, const char *sch)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == sch[j] && (!(sch[j])))
			j++;
		if (sch[j] && ((str[i] == sch[0] && str[i + j] == sch[j])))
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *str, const char *sch, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str == NULL && len == 0)
		return (NULL);
	else if (sch[i] == '\0')
		return ((char *)str);
	else if (str[i] == '\0')
		return (NULL);
	else if (len < 0)
		return (if_len_neg(str, sch));
	while (str[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && str[i + j] && sch[j] && str[i + j] == sch[j])
			j++;
		if (j == ft_strlen(sch))
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
