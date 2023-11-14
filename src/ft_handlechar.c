/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlechar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Eva <Eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:32:17 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/13 21:21:06 by Eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

void handlechar(va_list args) {
	
    char *str = va_arg(args, char *);
    
    while (*str != '\0') {
        my_putchar(*str++);
    }
}