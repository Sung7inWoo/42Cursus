/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:43:41 by hani              #+#    #+#             */
/*   Updated: 2023/02/18 23:55:24 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!(ptr))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}