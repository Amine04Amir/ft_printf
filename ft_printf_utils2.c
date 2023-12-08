/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:52:39 by mamir             #+#    #+#             */
/*   Updated: 2023/12/07 19:38:49 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthex(n / 16);
		i += ft_puthex(n % 16);
	}
	else
		i += ft_putchar("0123456789abcdef"[n]);
	return (i);
}

int	ft_puthexu(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthexu(n / 16);
		i += ft_puthexu(n % 16);
	}
	else
		i += ft_putchar("0123456789ABCDEF"[n]);
	return (i);
}

int	ft_pointer(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_pointer(n / 16);
		i += ft_pointer(n % 16);
	}
	else
		i += ft_putchar("0123456789abcdef"[n]);
	return (i);
}
