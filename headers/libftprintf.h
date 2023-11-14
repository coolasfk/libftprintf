/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Eva <Eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:30:11 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/13 21:39:08 by Eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

int ft_printf(const char *, ...);
void my_putchar(int c);
void handlechar(va_list args);
void handlepointer(va_list args);
