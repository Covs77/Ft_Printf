/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:26:33 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/19 17:26:16 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* int	ft_countdigit(int nb)
{
	int	i;

	i = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
} */

char	*ft_utoa(long long n)
{
	char	*res;
	int		i;
	int		digit;

	i = 0;
	digit = ft_countdigit(n) + i;
	res = (char *) malloc((sizeof (char) * digit) + 1);
	if (!res)
		return (0);
	res[digit] = 0;
	while ((n >= 0) && (i <= digit - 1))
	{
		res[digit - 1] = (n % 10) + '0';
		n = n / 10;
		digit--;
	}
	return (res);
}
