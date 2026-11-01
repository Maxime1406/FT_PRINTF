/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardeau <mbardeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:47:09 by mbardeau          #+#    #+#             */
/*   Updated: 2026/10/29 16:10:43 by mbardeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long n, char *base)
{
	int					count;
	char				c;
	unsigned long long	base_len;

	if (!base || base[0] == '\0')
		return (0);
	base_len = ft_strlen(base);
	count = 0;
	if (n >= base_len)
	{
		count += ft_putnbr_base(n / base_len, base);
		count += ft_putnbr_base(n % base_len, base);
	}
	else
	{
		c = base[n];
		count += write(1, &c, 1);
	}
	return (count);
}
