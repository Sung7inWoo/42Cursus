/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:26:32 by jthanikp          #+#    #+#             */
/*   Updated: 2023/03/20 18:00:54 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long n, int *length)
{
	if (n < 0)
	{
		*length += write(1, "-", 1);
		ft_putnbr(n * -1, length);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, length);
		ft_putnbr(n % 10, length);
	}
	else
	{
		n = n + '0';
		*length += write(1, &n, 1);
	}
	return (*length);
}

int	ft_putstr(char *str,int *length)
{
	int	i;

	i = 0;
	if (!str)
	{
		*length += write(1, "(null)", 6);
		return (*length);
	}
	while (str[i])
			*length += write(1, &str[i++], 1);
	return (*length);
}

int	ft_base16(unsigned long long n, char c, int *length)
{
	int		i;
	char	res[16];

	i = 0;
	if (c == 'x' || c == 'X')
		n = (unsigned int)n;
	if (n == 0)
		res[i++] = '0';
	while (n > 0)
	{
		if (c == 'x' || c == 'p')
			res[i] = "0123456789abcdef"[n % 16];
		else
			res[i] = "0123456789ABCDEF"[n % 16];
		i++;
		n /= 16;
	}
	if (c == 'p')
		*length += write(1, "0x", 2);
	while (i > 0)
		*length += write(1, &res[--i], 1);
	return (*length);
}

int	check_type(char c, va_list list, int *length)
{
	if (c == 'c')
	{
		c = va_arg(list, int);
		*length += write(1, &c, 1);
	}
	else if (c == 's')
		ft_putstr(va_arg(list, char *), length);
	else if (c == 'p' || c == 'x' || c == 'X')
		ft_base16(va_arg(list, unsigned long long), c, length);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(list, int), length);
	else if (c == 'u')
		ft_putnbr(va_arg(list, unsigned int), length);
	else if (c == '%')
		*length += write(1, "%%", 1);
	return (*length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	list;

	i = 0;
	length = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
			check_type(str[++i], list, &length);
		else
			length += write(1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (length);
}