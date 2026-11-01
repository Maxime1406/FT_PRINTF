/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:50:52 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/29 15:23:52 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(va_list args)
{
	void	*ptr;
	int		count;

	count = 0;
	ptr = va_arg(args, void *);
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	write(1, "0x", 2);
	count += 2;
	count += ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef");
	return (count);
}
