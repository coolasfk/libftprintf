/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlenum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:03:54 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 16:04:41 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int	num_recursive(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
        len += 11;
		return (*len);
	}
	if (n < 0)
	{
		my_putchar('-', len);
		n = -n;
	}
	if (n > 9)
		num_recursive(n / 10, len);
	if (n <= 9)
		my_putchar(n, len);
	if (n > 9)
		my_putchar(n%10, len);
	return (*len);
}

int	handlenum(va_list args, int *len)
{
	int	n;

	n = va_arg(args, int);
	num_recursive(n, len);
    return (*len);
}
