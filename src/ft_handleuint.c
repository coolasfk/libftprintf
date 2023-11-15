/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleuint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:39:19 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 22:24:14 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	putnum(unsigned num, int *len)
{
	if (num > 9)
	{
		putnum(num / 10, len);
		my_putchar(num % 10 + '0', len);
	}
	else
	{
		my_putchar(num + '0', len);
	}
	return (*len);
}

int	handleuint(va_list args, int *len)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	putnum(num, len);
	return (*len);
}
