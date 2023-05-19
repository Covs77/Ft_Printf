/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:51:31 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/19 17:58:15 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long x)
{
	char	*hexa_str;
	char	res[100];
	int		i;
	int		printed;

	i = 0;
	printed = 0;
		hexa_str = "0123456789abcdef";
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
