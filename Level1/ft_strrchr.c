/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:52:22 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 14:42:54 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int	len_s;
	int	i;
	int	occurrence;

	i = 0;
	len_s = ft_strlen(str);
	ptr = (char *)str;
	occurrence = len_s - i;
	if (c == '\0')
		return (NULL);
	while (occurrence > 0)
	{
		if (*(ptr + occurrence) == (unsigned char)c)
			return (&ptr[occurrence]);
		i++;
	}
	return (NULL);
}