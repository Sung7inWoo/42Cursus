/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:22:28 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:22:29 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_strdup allocates sufficient memory for copy of the strings s1,
	does the copy,
	and returns a pointer to it.
	The pointer may be used as an argument to the function free.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!(ptr))
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
