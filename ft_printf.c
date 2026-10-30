/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:38:27 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/30 15:04:19 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(args);
	else if (format == 's')
		count += ft_print_str(args);
	/*else if (format == 'p')
		count += ft_print_ptr(args);
	else if (format == 'd' || format == 'i')
		count += ft_print_nbr(args);
	else if (format == 'u')
		count += ft_print_unsigned(args);
	else if (format == 'x')
		count += ft_print_hex_lower(args);
	else if (format == 'X')
		count += ft_print_hex_upper(args);
	else if (format == '%')
		count += ft_print_percent(args);*/
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_check_format(format[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
