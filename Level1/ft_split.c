/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:00:10 by hani              #+#    #+#             */
/*   Updated: 2023/02/21 21:35:08 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_mem(char **s, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	free(*s);
	return (NULL);
}

static int	count(char *s, char c)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	if (s[i] == '\0')
		return (n);
	if (i == 0 && s[i] != c)
	{
		n++;
		i++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c && i > 0)
			n++;
		i++;
	}
	return (n);
}

static char	*subcpy(char *s, char c, int num)
{
	int	i;
	int	start;
	int	end;
	char	*ptr;

	i = 0;
	end = 0;
	while (i <= num)
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] != c && s[end])
			end++;
		if (i == num)
			ptr = ft_substr(s, start, end - start);
		i++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int	i;
	int	num;

	i = 0;
	num = count((char *)s, c);
	arr = (char **)malloc((num + 1) * sizeof(char *));
	if (!(arr))
		return (NULL);
	if (s == NULL)
		return (NULL);
	arr[num] = NULL;
	while (i < num)
	{
		arr[i] = subcpy((char *)s, c, i);
		if (arr[i] == NULL)
			return (free_mem(arr, i));
		i++;
	}
	return (arr);
}