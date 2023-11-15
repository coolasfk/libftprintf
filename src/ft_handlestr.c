/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlestr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:32:17 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 15:45:14 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

int	handlestr(va_list args, int *len)
{
	char *str;

	str = va_arg(args, char *);
	while (*str != '\0')
		my_putchar(*str++, len);
	return (*len);
}