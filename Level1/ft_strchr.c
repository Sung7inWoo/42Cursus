/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:28:32 by hani              #+#    #+#             */
/*   Updated: 2023/02/19 16:06:27 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strchr() function locates the first occurrence of c (converted to a char) in the
     string pointed to by s.  The terminating null character is considered to be part of the
     string; therefore if c is `\0', the functions locate the terminating `\0'.
RETURN The functions strchr() and strrchr() return a pointer to the located character, or NULL
     if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	if (c == '\0')
		return (&ptr[ft_strlen(str)]);
	while (ptr[i])
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}