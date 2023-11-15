/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:30:11 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 16:03:41 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int		ft_printf(const char *, ...);
int		my_putchar(int c, int *len);
void	handlepointer(va_list args, int *len);
int		handlestr(va_list args, int *len);
int		switch_cases(char specifier, va_list args, int *len);
int		decimal_to_hex(uintptr_t ptr_dec, int *len);
int		handlenum(va_list args, int *len);
int		num_recursive(int n, int *len);