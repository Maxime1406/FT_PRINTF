/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:26:54 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/30 16:55:56 by mbardeau         ###   ########.fr       */
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

void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *format, ...);
int		ft_print_char(va_list args);
int		ft_print_str(va_list args);
int		ft_print_ptr(va_list args);
int		ft_print_nbr(va_list args);
int		ft_print_unsigned(va_list args);
int		ft_print_hex_lower(va_list args);
int		ft_print_hex_upper(va_list args);
int		ft_print_percent(va_list args);

#endif