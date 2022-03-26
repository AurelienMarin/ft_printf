/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:29:51 by aumarin           #+#    #+#             */
/*   Updated: 2022/03/12 01:01:24 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_int(int nb, int count)
{
	unsigned int	n;
	char			c;
	static int		counter = 0;

	counter = count;
	n = (unsigned)nb;
	if (nb < 0)
	{
		n *= -1;
		counter += write(1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_int(n / 10, counter);
		c = n % 10 + 48;
		counter += write(1, &c, 1);
	}
	else
	{
		c = n + 48;
		counter += write(1, &c, 1);
	}
	return (counter);
}

int	ft_putnbr_uint(int nb, int count)
{
	unsigned int	n;
	char			c;
	static int		counter = 0;

	counter = count;
	n = (unsigned)nb;
	if (n > 9)
	{
		ft_putnbr_uint(n / 10, counter);
		c = n % 10 + 48;
		write(1, &c, 1);
		counter++;
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
		counter++;
	}
	return (counter);
}
