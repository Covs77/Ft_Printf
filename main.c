/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:16:57 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/19 20:30:42 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	
	char			c;
	char			*str1;
	int				num;
	unsigned int	num_unsig;
	unsigned int	x;
	char 			*ptr;
	int				a;
	int				b;

	c = '&';
	str1 = "cadena";
	num = 1277;
	num_unsig = -258;
	x = 922;
	ptr = &c;
	a = ft_printf ("\nMio: %c, %s, %p, %d, %i, %u, %x, %X, %%", c, str1, ptr, num, num, num_unsig, x, x);
	b = printf("\nFun: %c, %s, %p, %d, %i, %u, %x, %X, %%", c, str1, ptr, num, num, num_unsig, x, x);
	printf ("\n Devolución de ft_printf:  %i, \n Devolucion de Printf: %i", a, b);
	return (0);
}
