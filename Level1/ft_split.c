/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:00:10 by hani              #+#    #+#             */
/*   Updated: 2023/02/21 00:23:14 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char *s, char c)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	arr = (char **)malloc((count((char *)s, c)) * sizeof(char));
	if (!(arr))
		return (NULL);
	while (s[i])
	{
		j = i;
		while (s[j] != c && s[j])
			j++;
		arr[k++] = ft_substr(s, i, j - i);
		i = j + 1;
	}
	arr[k] = NULL;
	return (arr);
}