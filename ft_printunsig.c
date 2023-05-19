/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:29:28 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/19 17:33:34 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printunsig(unsigned int num)
{
	char		*num_conv;
	int			i;
	long long	num2;
	int			printed;

	i = 0;
	num2 = 4294967896 + num;
	if (num >= 0)
		num2 = num;
	num_conv = ft_utoa(num2);
	ft_printstr(num_conv);
	printed = ft_strlen (num_conv);
	free(num_conv);
	return (printed);
}
