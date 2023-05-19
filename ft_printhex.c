/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:30:27 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/19 17:57:09 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int x, char cap)
{
	char	*hexa_str;
	char	res[100];
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	if (cap == 'x' || cap == 'p')
		hexa_str = "0123456789abcdef";
	else
		hexa_str = "0123456789ABCDEF";
	while (x >= 16)
	{
		res[i] = hexa_str[x % 16];
		x = x / 16;
		i++;
	}
	res[i] = hexa_str[x];
	while (i >= 0)
	{
		ft_printchar(res[i]);
		i--;
		printed++;
	}
	return (printed);
}
