/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlenum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:03:54 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 23:08:03 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	num_recursive(int n, int *len)
{
	if (n == -2147483648)
	{
		*len += write(1, "-2147483648", 11);
		return (*len);
	}
	if (n == 0)
	{
		my_putchar('0', len);
		return (*len);
	}
	if (n < 0)
	{
		my_putchar('-', len);
		n = -n;
	}
	if (n >= 10)
	{
		num_recursive(n / 10, len);
	}
	my_putchar(n % 10 + '0', len);
	return (*len);
}

int	handlenum(va_list args, int *len)
{
	int	n;

	n = va_arg(args, int);
	num_recursive(n, len);
	return (*len);
}
