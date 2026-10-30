/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 10:31:36 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/30 16:26:34 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test_ft_print_char(void)
{
	int	res_ft_printf;
	int	res_printf_og;

	printf("---- [TEST] FT_PRINT_CHAR ----\n");
	res_ft_printf = ft_printf("FT    : [%c] [%c]\n", 'A', 'z');
	res_printf_og = printf("FT    : [%c] [%c]\n", 'A', 'z');
	printf("Res FT = %d | Res ORIGINAL = %d\n\n", res_ft_printf, res_printf_og);
	res_ft_printf = ft_printf("FT    : [%c] [%c] [%c]\n", ' ', '\(', '$');
	res_printf_og = printf("FT    : [%c] [%c] [%c]\n", ' ', '\(','$');
	printf("Res FT = %d | Res ORIGINAL = %d\n\n", res_ft_printf, res_printf_og);
}

void	test_ft_print_str(void)
{
	int	res_ft_printf;
	int	res_printf_og;

	printf("---- [TEST] FT_PRINT_STR ----\n");
	res_ft_printf = ft_printf("FT    : [%s] [%s]\n", "Test  ", "!@#$\%^&*()_+=-1234567890`~<,>.?/\"\'|:;{[	]}");
	res_printf_og = printf("FT    : [%s] [%s]\n", "Test  ", "!@#$\%^&*()_+=-1234567890`~<,>.?/\"\'|:;{[	]}");
	printf("Res FT = %d | Res ORIGINAL = %d\n\n", res_ft_printf, res_printf_og);
}

int	main(void)
{
	test_ft_print_char();
	test_ft_print_str();
}

/*printf("%c\n", 'd');
	printf("%s\n", "string");
	printf("%d\n", -20);
	printf("%i\n", 10);
	printf("%u\n", 20);*/
//voir pour les fonctions variadic (va_...) 
// (c'est les , ... dans ft_printf(const char *, ...))
//le const char * en parametre va prendre le
// %c genre if (str == %c) if(str == %s) ....
//ft_putchar pour le %c, ft_putstr pour le %s, 
// ft_putnbr pour le %d et peut etre le %% aussi??
//%i voir pour le cas où le deuxième paramètre est un négatif
// , ca fait un truc spécial.
//%x et %X a voir avec un ft_putnbr_base, avec un ft_convert
//  et un tolower et toupper en fonction de x ou X
base = "0123456789abcdef";
ft_putchar(base[n / 16]);

avec les pointeurs, commencer avec 0x cast unsigned long