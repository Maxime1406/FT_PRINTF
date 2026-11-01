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
#include <stdlib.h>

void	test_ft_print_char(void)
{
	int	ret_ft;
	int	ret_orig;

	printf("---- [TEST] FT_PRINT_CHAR ----\n");
	ret_ft = ft_printf("MY_FT : [%c] [%c]\n", 'A', 'z');
	ret_orig = printf("OG_FT : [%c] [%c]\n", 'A', 'z');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c] [%c] [%c]\n", ' ', '(', '$');
	ret_orig = printf("OG_FT : [%c] [%c] [%c]\n", ' ', '(', '$');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c]\n", '\t');
	ret_orig = printf("OG_FT : [%c]\n", '\t');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c]\n", '\n');
	ret_orig = printf("OG_FT : [%c]\n", '\n');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c]\n", '0');
	ret_orig = printf("OG_FT : [%c]\n", '0');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c]\n", '~');
	ret_orig = printf("OG_FT : [%c]\n", '~');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c] [%c]\n", 'a', 'Z');
	ret_orig = printf("OG_FT : [%c] [%c]\n", 'a', 'Z');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c]\n", 127);
	ret_orig = printf("OG_FT : [%c]\n", 127);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c]\n", 0);
	ret_orig = printf("OG_FT : [%c]\n", 0);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%c] [%c] [%c]\n", 'x', 'y', 'z');
	ret_orig = printf("OG_FT : [%c] [%c] [%c]\n", 'x', 'y', 'z');
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

void	test_ft_print_str(void)
{
	int		ret_ft;
	int		ret_orig;
	char	*ptr;

	printf("---- [TEST] FT_PRINT_STR ----\n");
	ret_ft = ft_printf("MY_FT : [%s] [%s]\n", "Test  ", "!@#$%^&*()_+=-1234567890`~<,>.?/\"\'|:;{[  ]}");
	ret_orig = printf("OG_FT : [%s] [%s]\n", "Test  ", "!@#$%^&*()_+=-1234567890`~<,>.?/\"\'|:;{[  ]}");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ptr = NULL;
	ret_ft = ft_printf("MY_FT : [%s]\n", ptr);
	ret_orig = printf("OG_FT : [%s]\n", ptr);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s]\n", "");
	ret_orig = printf("OG_FT : [%s]\n", "");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s] [%s]\n", "Hello", "World");
	ret_orig = printf("OG_FT : [%s] [%s]\n", "Hello", "World");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s]\n", "42");
	ret_orig = printf("OG_FT : [%s]\n", "42");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s] [%s] [%s]\n", "A", "B", "C");
	ret_orig = printf("OG_FT : [%s] [%s] [%s]\n", "A", "B", "C");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s]\n", "Line1\nLine2");
	ret_orig = printf("OG_FT : [%s]\n", "Line1\nLine2");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s]\n", "\tTabbed");
	ret_orig = printf("OG_FT : [%s]\n", "\tTabbed");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s]\n", "Long string with spaces and numbers 1234567890");
	ret_orig = printf("OG_FT : [%s]\n", "Long string with spaces and numbers 1234567890");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%s]\n", "The quick brown fox jumps over the lazy dog");
	ret_orig = printf("OG_FT : [%s]\n", "The quick brown fox jumps over the lazy dog");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

void	test_ft_print_percent(void)
{
	int	ret_ft;
	int	ret_orig;

	printf("---- [TEST] FT_PRINT_PERCENT ----\n");
	ret_ft = ft_printf("MY_FT : 100%%\n");
	ret_orig = printf("OG_FT : 100%%\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : %%%%\n");
	ret_orig = printf("OG_FT : %%%%\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : %% %% %%\n");
	ret_orig = printf("OG_FT : %% %% %%\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : %%\n");
	ret_orig = printf("OG_FT : %%\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : Test%%\n");
	ret_orig = printf("OG_FT : Test%%\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : %%Test\n");
	ret_orig = printf("OG_FT : %%Test\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : A%%B%%C\n");
	ret_orig = printf("OG_FT : A%%B%%C\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : %%%%%%\n");
	ret_orig = printf("OG_FT : %%%%%%\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : %%, %%, %%\n");
	ret_orig = printf("OG_FT : %%, %%, %%\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%%]\n");
	ret_orig = printf("OG_FT : [%%]\n");
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

void	test_ft_print_nbr(void)
{
	int	ret_ft;
	int	ret_orig;

	printf("---- [TEST] FT_PRINT_NBR ----\n");
	ret_ft = ft_printf("MY_FT : [%d] [%i]\n", (int)-2147483648, 2147483647);
	ret_orig = printf("OG_FT : [%d] [%i]\n", (int)-2147483648, 2147483647);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d] [%i] [%d]\n", 0, -0, 42);
	ret_orig = printf("OG_FT : [%d] [%i] [%d]\n", 0, -0, 42);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d] [%d]\n", -2147483647, 2147483646);
	ret_orig = printf("OG_FT : [%d] [%d]\n", -2147483647, 2147483646);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d] [%i] [%d]\n", 1999, -42, 2147483647);
	ret_orig = printf("OG_FT : [%d] [%i] [%d]\n", 1999, -42, 2147483647);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d]\n", -1);
	ret_orig = printf("OG_FT : [%d]\n", -1);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d]\n", 9);
	ret_orig = printf("OG_FT : [%d]\n", 9);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d]\n", 10);
	ret_orig = printf("OG_FT : [%d]\n", 10);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d] [%d]\n", 123456, -123456);
	ret_orig = printf("OG_FT : [%d] [%d]\n", 123456, -123456);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d] [%d] [%d]\n", 7, 88, 999);
	ret_orig = printf("OG_FT : [%d] [%d] [%d]\n", 7, 88, 999);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%d] [%d] [%d]\n", -7, -88, -999);
	ret_orig = printf("OG_FT : [%d] [%d] [%d]\n", -7, -88, -999);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

void	test_ft_print_ptr(void)
{
	int		ret_ft;
	int		ret_orig;
	int		a;
	char	c;
	int		*ptr_null;
	int		*ptr_a;
	void	*ptr_malloc;

	a = 42;
	c = 'H';
	ptr_null = NULL;
	ptr_a = &a;
	ptr_malloc = malloc(10);
	printf("---- [TEST] FT_PRINT_PTR ----\n");
	ret_ft = ft_printf("MY_FT : [%p]\n", ptr_null);
	ret_orig = printf("OG_FT : [%p]\n", ptr_null);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%p]\n", (void *)0);
	ret_orig = printf("OG_FT : [%p]\n", (void *)0);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%p]\n", ptr_a);
	ret_orig = printf("OG_FT : [%p]\n", ptr_a);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%p]\n", &c);
	ret_orig = printf("OG_FT : [%p]\n", &c);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%p]\n", ptr_malloc);
	ret_orig = printf("OG_FT : [%p]\n", ptr_malloc);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%p]\n", &test_ft_print_ptr);
	ret_orig = printf("OG_FT : [%p]\n", &test_ft_print_ptr);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%p] [%p] [%p]\n", ptr_a, ptr_null, ptr_malloc);
	ret_orig = printf("OG_FT : [%p] [%p] [%p]\n", ptr_a, ptr_null, ptr_malloc);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%p]\n", (void *)0xFFFFFFFFFFFFFFFF);
	ret_orig = printf("OG_FT : [%p]\n", (void *)0xFFFFFFFFFFFFFFFF);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	free(ptr_malloc);
}

void	test_ft_print_unsigned(void)
{
	int	ret_ft;
	int	ret_orig;

	printf("---- [TEST] FT_PRINT_UNSIGNED ----\n");
	ret_ft = ft_printf("MY_FT : [%u]\n", 0);
	ret_orig = printf("OG_FT : [%u]\n", 0);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%u]\n", 42);
	ret_orig = printf("OG_FT : [%u]\n", 42);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%u]\n", 4294967295U);
	ret_orig = printf("OG_FT : [%u]\n", 4294967295U);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%u]\n", -1);
	ret_orig = printf("OG_FT : [%u]\n", -1);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("OG_FT : [%u] [%u]\n", (unsigned int)-42, (unsigned int)-2147483648);
	ret_orig = printf("OG_FT : [%u] [%u]\n", (unsigned int)-42, (unsigned int)-2147483648);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%u]\n", 2147483647);
	ret_orig = printf("OG_FT : [%u]\n", 2147483647);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%u] - [%u] - [%u]\n", 0, 123456, -9);
	ret_orig = printf("OG_FT : [%u] - [%u] - [%u]\n", 0, 123456, -9);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

void	test_print_hex_lower(void)
{
	int	ret_ft;
	int	ret_orig;

	printf("---- [TEST] PRINT_HEX_LOWER ----\n");
	ret_ft = ft_printf("MY_FT : [%x]\n", 0);
	ret_orig = printf("OG_FT : [%x]\n", 0);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%x]\n", 42);
	ret_orig = printf("OG_FT : [%x]\n", 42);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%x]\n", 255);
	ret_orig = printf("OG_FT : [%x]\n", 255);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%x]\n", -1);
	ret_orig = printf("OG_FT : [%x]\n", -1);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%x] [%x]\n", (unsigned int)-42, (unsigned int)-2147483648);
	ret_orig = printf("OG_FT : [%x] [%x]\n", (unsigned int)-42, (unsigned int)-2147483648);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%x]\n", 2147483647);
	ret_orig = printf("OG_FT : [%x]\n", 2147483647);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%x] - [%x] - [%x]\n", 0, 123456, (unsigned int)-9);
	ret_orig = printf("OG_FT : [%x] - [%x] - [%x]\n", 0, 123456, (unsigned int)-9);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

void	test_print_hex_upper(void)
{
	int	ret_ft;
	int	ret_orig;

	printf("---- [TEST] PRINT_HEX_UPPER ----\n");
	ret_ft = ft_printf("MY_FT : [%X]\n", 0);
	ret_orig = printf("OG_FT : [%X]\n", 0);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%X]\n", 42);
	ret_orig = printf("OG_FT : [%X]\n", 42);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%X]\n", 255);
	ret_orig = printf("OG_FT : [%X]\n", 255);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%X]\n", -1);
	ret_orig = printf("OG_FT : [%X]\n", -1);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%X] [%X]\n", (unsigned int)-42, (unsigned int)-2147483648);
	ret_orig = printf("OG_FT : [%X] [%X]\n", (unsigned int)-42, (unsigned int)-2147483648);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%X]\n", 2147483647);
	ret_orig = printf("OG_FT : [%X]\n", 2147483647);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%X] - [%X] - [%X]\n", 0, 123456, (unsigned int)-9);
	ret_orig = printf("OG_FT : [%X] - [%X] - [%X]\n", 0, 123456, (unsigned int)-9);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

void	test_ft_print_combinations(void)
{
	int		ret_ft;
	int		ret_orig;
	int		a;
	char	*str;

	a = 42;
	str = "42chool";
	printf("---- [TEST] FT_PRINT_COMBINATIONS ----\n");
	ret_ft = ft_printf("MY_FT : [%c] [%s] [%d] [100%%]\n", 'Z', str, (int)-2147483648);
	ret_orig = printf("OG_FT : [%c] [%s] [%d] [100%%]\n", 'Z', str, (int)-2147483648);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [%u] [%x] [%X]\n", 4294967295U, 425, 425);
	ret_orig = printf("OG_FT : [%u] [%x] [%X]\n", 4294967295U, 425, 425);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : [Ptr: %p] [Hex: %x] [Nbr: %i]\n", &a, 255, -42);
	ret_orig = printf("OG_FT : [Ptr: %p] [Hex: %x] [Nbr: %i]\n", &a, 255, -42);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
	ret_ft = ft_printf("MY_FT : Start -> %c | %s | %d | %u | %x | %X | %p | %%, End\n",
			'A', "test", -123, 123, 48879, 48879, &a);
	ret_orig = printf("OG_FT : Start -> %c | %s | %d | %u | %x | %X | %p | %%, End\n",
			'A', "test", -123, 123, 48879, 48879, &a);
	printf("Ret FT = %d | Ret ORIG = %d\n\n", ret_ft, ret_orig);
}

int	main(void)
{
	test_ft_print_char();
	test_ft_print_str();
	test_ft_print_percent();
	test_ft_print_nbr();
	test_ft_print_ptr();
	test_ft_print_unsigned();
	test_print_hex_lower();
	test_print_hex_upper();
	test_ft_print_combinations();
	return (0);
}
