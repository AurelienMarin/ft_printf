/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:44:44 by aumarin           #+#    #+#             */
/*   Updated: 2022/03/12 00:09:34 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse(char type, va_list p)
{
	if (type == 'c')
		return (ft_putchar(va_arg(p, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(p, char *)));
	else if (type == 'p' || type == 'x' || type == 'X')
	{
		if (type == 'X')
			return (ft_putnbr_hex(va_arg(p, int), 1, 0));
		else if (type == 'p')
			return (ft_putptr_hex(va_arg(p, unsigned long int)));
		else
			return (ft_putnbr_hex(va_arg(p, int), 0, 0));
	}
	else if (type == 'd' || type == 'i')
		return (ft_putnbr_int(va_arg(p, int), 0));
	else if (type == 'u')
		return (ft_putnbr_uint(va_arg(p, unsigned int), 0));
	else if (type == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		total_length;
	size_t	i;

	if (!str)
		return (0);
	total_length = 0;
	i = 0;
	va_start(params, str);
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			total_length += parse(str[i + 1], params);
			i++;
		}
		else
			total_length += ft_putchar(str[i]);
		i++;
	}
	va_end(params);
	return (total_length);
}
