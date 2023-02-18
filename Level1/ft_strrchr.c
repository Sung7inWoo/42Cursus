/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 02:52:22 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 21:50:15 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int	len_s;
	int	i;

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