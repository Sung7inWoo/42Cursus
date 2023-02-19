/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:53:33 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/19 14:52:03 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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