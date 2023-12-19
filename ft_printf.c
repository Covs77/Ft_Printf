/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:44:13 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/23 18:46:24 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_print_format(const char *str, va_list args)
{
	int				print_len;
	int				i;
	unsigned long	ptr;

	print_len = 0;
	i = 0;
	if (str[i] == 'c')
		print_len = print_len + ft_printchar(va_arg(args, int));
	else if (str[i] == 's')
		print_len = print_len + ft_printstr(va_arg(args, char *));
	else if (str[i] == 'i' || str[i] == 'd')
		print_len = print_len + ft_printnmbr(va_arg(args, int));
	else if (str[i] == 'u')
		print_len = print_len + ft_printunsig(va_arg(args, unsigned int));
	else if (str[i] == 'p')
	{
		ptr = va_arg(args, unsigned long);
		ft_printstr("0x");
		return (ft_printptr(ptr) + 2);
	}
	else if (str[i] == 'x' || str[i] == 'X')
		print_len += ft_printhex(va_arg(args, unsigned long int), str[i]);
	else if (str[i] == '%')
		print_len += ft_printchar('%');
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start (args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			count = count + ft_print_format(&str[++i], args);
		else
			count = count + write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
