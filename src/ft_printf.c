/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:31:48 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 16:07:17 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int	switch_cases(char specifier, va_list args, int *len)
{
	int	c;

	if (specifier == 's')
		handlestr(args, len);
	if (specifier == 'c')
	{
		c = va_arg(args, int);
		my_putchar(c, len);
	}
	if (specifier == 'p')
		handlepointer(args, len);
	if (specifier == 'i' || specifier == 'd')
		handlenum(args, len);
	if (specifier == 'u')
		handlepointer(args, len);
	if (specifier == 'x' || specifier == 'X')
		handlepointer(args, len);
	if (specifier == '%')
		my_putchar('%', len);
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
			switch_cases(*(++format), args, &len);
		}
		else
		{
			my_putchar(*format, &len);
		}
		if (len == -1)
		{
			va_end(args);
			return (-1);
		}
		format++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	ft_printf("printRt: %p", "cat");
}