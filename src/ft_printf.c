/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Eva <Eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:31:48 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/13 21:41:29 by Eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int switch_cases(char specifier, va_list args) {
	
	int c;

	c = va_arg(args, int);
	
    if (specifier == 's')
        handlechar(args);
	if (specifier == 'c')
	my_putchar(c);
	if (specifier == 'c')
	my_putchar(c);
	if (specifier == 'p')
	handlepointer(c);
	
		
    

    return 0;
}



int ft_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    if (!format)
        return 1;

    while (*format) {
        if (*format == '%') {
            format++;
            switch_cases(*format, args);
        } else {
            my_putchar(*format); 
        }
        format++;
    }

    va_end(args);
    return 0;
}

int	main(void)
{
	ft_printf("printRt: %p", 'x');
}