/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:31:48 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 23:09:14 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	switch_cases(char specifier, va_list args, int *len)
{
	int	c;

	if (specifier == 's')
	{
		if (handlestr(args, len) == -1)
			return (-1);
	}
	if (specifier == 'c')
	{
		c = va_arg(args, int);
		if (my_putchar(c, len) == -1)
			return (-1);
	}
	if (specifier == 'p')
	{
		if (handlepointer(args, len) == -1)
			return (-1);
	}
	if (specifier == 'i' || specifier == 'd')
	{
		if (handlenum(args, len) == -1)
			return (-1);
	}
	if (specifier == 'u')
		handleuint(args, len);
	if (specifier == 'x' || specifier == 'X')
		handlehex(args, len, specifier);
	if (specifier == '%')
	{
		if (my_putchar('%', len) == -1)
			return (-1);
	}
	return (*len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (switch_cases(*(++format), args, &len) == -1)
			{
				va_end(args);
				return (-1);
			}
		}
		else if (my_putchar(*format, &len) == -1)
		{
			va_end(args);
			return (-1);
		}
		format++;
	}
	va_end(args);
	return (len);
}
