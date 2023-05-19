/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnmbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:27:48 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/19 17:02:21 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnmbr(int num)
{
	char	*num_conv;
	int		printed;

	num_conv = ft_itoa(num);
	printed = ft_strlen(num_conv);
	ft_printstr(num_conv);
	free(num_conv);
	return (printed);
}
