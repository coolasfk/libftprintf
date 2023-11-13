/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:31:48 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/13 17:40:57 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int	switch_cases(int c, char str)
{
	if (c == 's')
    {
      handlechar(str);  
    }
	
	//my_putchar(c);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	

	if (!str)
		return (1);
	
	va_start(args, str);
	while (*str)
	{
		//printf("current: %c\n", *str);
		va_arg(args, int);
		if (*str == '%')
		{
			str++;
			switch_cases(*str, str);
		}
		else
		{
			my_putchar(*str);
		}
        str++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("print: %s", "cat");
}