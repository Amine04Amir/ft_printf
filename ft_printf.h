/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:06:52 by mamir             #+#    #+#             */
/*   Updated: 2023/12/04 12:08:23 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_strlen(char *s);
int	ft_pointer(unsigned long p);
int	ft_puthexu(unsigned int n);
int	ft_puthex(unsigned int n);
int	ft_unsigned(unsigned int n);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_putchar(int c);

#endif
