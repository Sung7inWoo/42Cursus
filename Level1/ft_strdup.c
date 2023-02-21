/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:56:33 by hani              #+#    #+#             */
/*   Updated: 2023/02/21 13:34:34 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strdup() function allocates sufficient memory for a copy of the string s1, does the
     copy, and returns a pointer to it.
	If insufficient memory is available, NULL is returned.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int	i;

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