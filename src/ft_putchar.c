/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:59:53 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 15:58:16 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"
#include <unistd.h>

int	my_putchar(int c, int *len)
{
	if(c >= 0 && c <= 9)
	c += '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	(*len)++;
	return (*len);
}