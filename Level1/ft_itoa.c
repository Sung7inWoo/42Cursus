/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:20:20 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/26 18:20:22 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_itoa take a integer and change it as an string copy in malloc.
Return the string in malloc.
*/

#include "libft.h"

size_t	count_n(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	count;
	long	num;

	count = count_n(n);
	ptr = (char *)malloc((count + 1) * sizeof(char));
	if (!(ptr))
		return (NULL);
	num = (long)n;
	ptr[count] = '\0';
	if (num == 0)
		ptr[0] = (num + '0');
	if (num < 0)
	{
		ptr[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		ptr[count - 1] = (num % 10) + '0';
		num /= 10;
		count--;
	}
	return (ptr);
}
