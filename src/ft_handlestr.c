/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlestr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:32:17 by eprzybyl          #+#    #+#             */
/*   Updated: 2023/11/15 22:57:22 by eprzybyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int handlestr(va_list args, int *len) {
    char *str;

    str = va_arg(args, char *);
    if (str == NULL) {
        str = "(null)";  // Handle NULL by pointing str to "(null)"
    }
    while (*str != '\0') {
        if (my_putchar(*str++, len) == -1) {
            return (-1);  // Return -1 if my_putchar fails
        }
    }
    return *len;
}
