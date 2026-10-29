/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:38:27 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/29 16:10:25 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	double	d;
	void	*p;
	va_list	args;

	va_start(args, format);
	while (format)
	{
		if (format == 'c')
			ft_print_char(args);
		if (format == 's')
			ft_print_str(args);
		if (format == 'p')
			ft_print_ptr(args);
		if (format == 'd' || format == 'i')
			ft_print_nbr(args);
		if (format == 'u')
			ft_print_unsigned();
		if (format == 'x')
			ft_print_hex_lower();
		if (format == 'X')
			ft_print_hex_upper();
		if (format == '%')
			ft_print_percent();
		format++;
		va_arg(args, int);
	}
	va_end(args);
	return (0);
}
