/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:42:23 by cleguina          #+#    #+#             */
/*   Updated: 2023/05/19 18:17:39 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(int i);
int		ft_strlen(const char *str);
int		ft_printstr(char *str);
char	*ft_itoa(int n);
char	*ft_utoa(long long n);
int		ft_printnmbr(int num);
int		ft_printunsig(unsigned int num);
int		ft_printhex(unsigned int x, char cap);
int		ft_countdigit(long long nb);
int		ft_printptr(unsigned long ptr);
int		ft_strchr(const char *s, int c);

#endif