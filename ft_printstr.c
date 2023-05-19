/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:21:30 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/17 21:17:01 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printstr(char *str)
{
	int		cont;
	char	c;

	if (!str)
		return (ft_printstr("(null)"));
	cont = 0;
	c = str[cont];
	while (c != '\0')
	{
		write(1, &c, 1);
		cont++;
		c = str[cont];
	}
	return (cont);
}
