/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlepointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Eva <Eva@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:37:55 by Eva               #+#    #+#             */
/*   Updated: 2023/11/13 21:50:29 by Eva              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libftprintf.h"

void handlepointer(va_list args)
{
    void *ptr;
    
    
    ptr = va_arg(args, void*);

    my_putchar(ptr);
}