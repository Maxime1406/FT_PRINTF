/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:26:54 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/29 15:22:29 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*============================================================================*/
/*                    	     INCLUDE STANDARDS LIBRARIES		              */
/*============================================================================*/

# include <stdarg.h>
# include <unistd.h>

/*============================================================================*/
/*                          	UTILITIES FUNCTION                            */
/*============================================================================*/

int	ft_printf(const char *format, ...);
int	ft_printf_char(va_list args);
int	ft_print_str(va_list args);
int	ft_print_ptr(va_list args);
int	ft_print_nbr(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_hex_lower(va_list args);
int	ft_print_hex_upper(va_list args);
int	ft_print_percent(va_list args);

#endif