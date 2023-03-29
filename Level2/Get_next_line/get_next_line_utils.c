/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:56:05 by jthanikp          #+#    #+#             */
/*   Updated: 2023/03/30 00:23:38 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	if (c == '\0')
		return (&ptr[ft_strlen(str)]);
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = -1;
	while (src[++i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = -1;
	while (s1[++i])
		ptr[i] = s1[i];
	j = -1;
	while (s2[++j])
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}

t_var	*ft_substr(char const *s, unsigned int start, size_t len)
{
	t_var	p;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	p.n = ft_strlen(&s[start]);
	if (p.n < len)
		p.size = p.n + 1;
	else
		p.size = len + 1;
	p.ptr = (char *)malloc(p.size * sizeof(char));
	if (!(p.ptr))
		return (NULL);
	p.i = 0;
	p.j = start - 1;
	while (s[++p.j])
		p.ptr[p.i++] = s[p.j];
	return (p.ptr);
}