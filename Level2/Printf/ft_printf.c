/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:26:32 by jthanikp          #+#    #+#             */
/*   Updated: 2023/03/19 21:37:52 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

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
		write(1, "(null)", 6);
		*length += 6;
	}
	while (str[i])
	{
		write(1, &str[i++], 1);
		*length++;
	}
	return (*length);
}

int	ft_hexidecimal(unsigned long long n, char c, int *length)
{
	int	i;
	
}

int	check_type(char c, va_list list, int *length)
{
	if (c == 'c')
	{
		c = va_arg(list, int);
		*length += write(1, &c, 1);
	}
	else if (c == 's')
		*length += ft_putstr(va_arg(list, char *), &length);
	else if (c == 'p')
		*length += ;
	else if (c == 'd' || c == 'i')
		*length += ft_putnbr(va_arg(list, int), &length);
	else if (c == 'u')
		*length += ft_putnbr(va_arg(list, unsigned int), &length);
	else if (c == 'x' || c == 'X')
		*length += ;
	return (*length);
}

int	ft_printf(const char *str, ...)
{
	int		length;
	va_list	list;
	int		i;

	i = 0;
	va_start(list, str);
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
				length += write(1, "%", 1);
			else
				length += check_type(str[++i], list, &length);
		}
		else
			length += write(1, str[i], 1);
		i++;
	}
	va_end(list);
	return (length);
}