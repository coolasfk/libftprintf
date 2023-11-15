/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlepointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:37:55 by Eva               #+#    #+#             */
/*   Updated: 2023/11/15 15:30:37 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int	decimal_to_hex(uintptr_t ptr_dec, int *len)
{
	int	hex;
	int	remainder;
	char	*set;

	remainder = 0;
	set = "0123456789abcdef";
	while (ptr_dec > 0)
	{
		remainder = ptr_dec % 16; 
		hex = set[remainder]; 
		//printf("remainder %c\n", hex);
		//hex -= 48;
		write(1, &hex, 1);
		//my_putchar(hex, len); 
		ptr_dec /= 16;               
	}
	write(1, "\n", 1);
	return (*len);
}
void	handlepointer(va_list args, int *len)
{
	void *ptr;
	uintptr_t ptr_dec;
	(void)len;
	ptr = va_arg(args, void *);
	ptr_dec = (uintptr_t)ptr;
	decimal_to_hex(ptr_dec, len);
	printf("pointer: %lu\n", ptr_dec);
}