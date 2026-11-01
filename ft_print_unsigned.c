/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:54:45 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/29 15:23:58 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(va_list args)
{
	unsigned int	n;
	int				count;

	n = va_arg(args, unsigned int);
	count = ft_putnbr_base(n, "0123456789");
	return (count);
}
