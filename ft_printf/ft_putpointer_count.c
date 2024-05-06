/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:11:41 by mcaro-ro          #+#    #+#             */
/*   Updated: 2024/04/23 20:55:15 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer_count(unsigned long pointer, const int fd, int *count)
{
	ft_putstr_count("0x", fd, count);
	ft_putnbr_base(pointer, BASE_HEX_LOWER, fd, count);
}
