/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlepointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:37:55 by Eva               #+#    #+#             */
/*   Updated: 2023/11/15 20:18:02 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int	decimal_to_hex_p(uintptr_t ptr_dec, int *len)
{
	int		remainder;
	char	*set;
	char	temp[20];
	int		i;

	i = 0;
	set = "0123456789abcdef";
	while (ptr_dec > 0)
	{
		remainder = ptr_dec % 16;
		temp[i++] = set[remainder];
		ptr_dec /= 16;
	}
	temp[i] = '\0';
	while (i > 0)
		my_putchar(temp[--i], len);
	return (*len);
}

void	handlepointer(va_list args, int *len)
{
	void		*ptr;
	uintptr_t	ptr_dec;

	(void)len;
	ptr = va_arg(args, void *);
	ptr_dec = (uintptr_t)ptr;
	my_putchar('0', len);
	my_putchar('x', len);
	decimal_to_hex_p(ptr_dec, len);
	// printf("pointer: %lu\n", ptr_dec);
}
