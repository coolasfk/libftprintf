/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleuint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:39:19 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 19:49:42 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int	putnum(int num, int *len)
{
	if (num > 9)
	{
		putnum(num / 10, len);
		my_putchar(num % 10, len);
	}
	else
	{
		my_putchar(num, len);
	}
	return (*len);
}

int	handleuint(va_list args, int *len)
{
	int num;

	num = va_arg(args, unsigned int);
	putnum(num, len);

	return (*len);
}