/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hani <hani@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:39:59 by hani              #+#    #+#             */
/*   Updated: 2023/02/20 14:58:42 by hani             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_n(int n)
{
	size_t	count;

	count = 1;
	if (n == -2147483648)
	{
		n = (n + 1) * -1;
		count++;
	}
	else if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	putnbr(int n)
{
	int	res;

	res = (n % 10) + '0';
	return (res);
}

int	convert(int n)
{
	if (n == -2147483648)
		n = (n + 1) * -1;
	else if (n < 0)
		n = n * -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	count;
	int	save;

	save = n;
	count = count_n(n) - 1;
	ptr = ft_calloc((count), sizeof(char));
	n = convert(n);
	while (count > 0 && n > 9)
	{
		*(ptr + count) = putnbr(n);
		n /= 10;
		count--;
	}
	if (save == -2147483648 || save < 0)
	{
		count = count_n(save) - 1;
		*ptr = '-';
		if (save == -2147483648)
			*(ptr + count) += 1;
		*(ptr + 1) = n + '0';
	}
	else
		*ptr = n + '0';
	return (ptr);
}