/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:50:44 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/30 16:26:16 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(va_list args)
{
	unsigned int	n;
	int				count;

	n = va_arg(args, unsigned int);
	count = ft_putnbr_base(n, "0123456789ABCDEF");
	return (count);
}
