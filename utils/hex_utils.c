/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:31:48 by aumarin           #+#    #+#             */
/*   Updated: 2022/03/12 00:07:46 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_hex(unsigned int nbr, int isUpper, int c)
{
	unsigned int	n;
	const char		*base;
	static int		counter = 0;

	base = "0123456789abcdef";
	counter = c;
	if (isUpper == 1)
		base = "0123456789ABCDEF";
	n = (unsigned)nbr;
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16, isUpper, counter);
		ft_putnbr_hex(n % 16, isUpper, counter);
	}
	else
		counter += ft_putchar(base[n]);
	return (counter);
}

int	display_ptr(unsigned long int n, int c)
{
	unsigned long int	base_len;
	const char			*base;
	static int			counter = 0;

	counter = c;
	base = "0123456789abcdef";
	base_len = 16;
	if (n >= base_len)
	{
		display_ptr(n / base_len, counter);
		display_ptr(n % base_len, counter);
	}
	else
		counter += ft_putchar(base[n]);
	return (counter);
}

int	ft_putptr_hex(unsigned long int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += write(1, "(nil)", 5);
	else
	{
		size += write(1, "0x", 2);
		size += display_ptr(n, 0);
	}
	return (size);
}
