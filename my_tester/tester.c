/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:41:02 by aumarin           #+#    #+#             */
/*   Updated: 2022/03/11 21:34:59 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_printf.h"

int	main(void)
{
	int	i;

	i = 23;
	/*
	ft_printf("[c] : %c\n", 'D');
	ft_printf("[s] : %s\n", "YOP");
	ft_printf("[p] : %p\n", &i);
	ft_printf("[d] : %d\n", -123);
	ft_printf("[i] : %i\n", 4567);
	ft_printf("[u] : %u\n", -20);
	ft_printf("[x] : %x\n", 0x8C5);
	ft_printf("[X] : %X\n", 0x8c5);
	ft_printf("[pourcent] : %%\n");
	printf("===== libc printf =====\n");
	printf("[c] : %c\n", 'D');
	printf("[s] : %s\n", "YOP");
	printf("[p] : %p\n", &i);
	printf("[d] : %d\n", -123);
	printf("[i] : %i\n", 4567);
	printf("[u] : %u\n", -20);
	printf("[x] : %x\n", 0x8C5);
	printf("[X] : %X\n", 0x8c5);
	printf("[pourcent] : %%\n");
	*/
	//ft_printf("[p] : %p\n", &i);
	//ft_printf("The NULL macro represents the %p address", ((void*)0));
	ft_printf("%p\n", &i);
	ft_printf("%p\n", ((void*)0));


	return (0);
}

/* TODO
		Rendre coherente ft_putnbr_uint
		putptr_hex if null should print (nil) not 0x0
		%d %i %u wrong return values
**/