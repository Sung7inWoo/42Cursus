/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:23:05 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:23:08 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_strrchr locates the last occurence of c
	in the string pointed to by s, this included the null character.
	Return a pointer to the located character.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		len_s;
	int		i;

	i = 0;
	len_s = ft_strlen(str);
	ptr = (char *)str;
	if (c == '\0')
		return (&ptr[len_s]);
	while (i <= len_s)
	{
		if (ptr[len_s - i] == (char)c)
			return (&ptr[len_s - i]);
		i++;
	}
	return (NULL);
}
