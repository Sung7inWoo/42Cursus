/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:12:44 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/25 22:08:43 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_strtrim copy the string s1 in new string,
	remove the set of charactere at begining and end of s1.
	Return the new trimmed string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	start = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (ft_strchr(set, s1[start++]) != NULL)
	{
		if (start == ft_strlen(s1))
			return (ft_strdup(""));
	}
	start = 0;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[len]) != NULL)
		len--;
	return (ft_substr(s1, start, (len - start + 1)));
}
