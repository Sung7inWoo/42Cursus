/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:53:33 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/25 22:09:03 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_substr creat a substring from the string s.
	The substring begin at index of start and copy for len size in substring.
	Return the substring creat from s, or NULL if memory not allocated.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	i = ft_strlen(&s[start]);
	if (i < len)
		size = i + 1;
	else
		size = len + 1;
	ptr = (char *)malloc(size * sizeof(char));
	if (!(ptr))
		return (NULL);
	ft_strlcpy(ptr, &s[start], size);
	return (ptr);
}
