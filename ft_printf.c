/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:09:34 by mamir             #+#    #+#             */
/*   Updated: 2023/12/21 13:33:13 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *str, va_list argptr)
{
	int	count;

	count = 0;
	if (*str == '%')
		count = ft_putchar('%');
	else if (*str == 'c')
		count = ft_putchar(va_arg(argptr, int));
	else if (*str == 's')
		count = ft_putstr(va_arg(argptr, char *));
	else if (*str == 'd' || *str == 'i')
		count = ft_putnbr(va_arg(argptr, int));
	else if (*str == 'u')
		count = ft_unsigned(va_arg(argptr, int));
	else if (*str == 'x')
		count = ft_puthex(va_arg(argptr, unsigned int));
	else if (*str == 'X')
		count = ft_puthexu(va_arg(argptr, unsigned int));
	else if (*str == 'p')
	{
		count = ft_putstr("0x");
		count += ft_pointer(va_arg(argptr, unsigned long));
	}
	else
		count = ft_putchar(*str);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	argptr;

	i = 0;
	count = 0;
	va_start(argptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				break ;
			count += ft_check(&str[i + 1], argptr);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(argptr);
	return (count);
}
// int main() {
//     char ch = 'A';
//     char *str = "Hello, world!";
//     int num = 123456;
//     unsigned int unsig_num = 4294967295; // Max unsigned int value
//     int pointer_value = 42;

//     printf("printf:\n");
//     printf("%%c: %c\n", ch);
//     printf("%%s: %s\n", str);
//     printf("%%p: %p\n", &pointer_value);
//     printf("%%d: %d\n", num);
//     printf("%%i: %i\n", num);
//     printf("%%u: %u\n", unsig_num);
//     printf("%%x: %x\n", num);
//     printf("%%X: %X\n", num);
//     printf("%%%%: %%\n");

//     printf("\nft_printf:\n");
//     ft_printf("%%c: %c\n", ch);
//     ft_printf("%%s: %s\n", str);
//     ft_printf("%%p: %p\n", &pointer_value);
//     ft_printf("%%d: %d\n", num);
//     ft_printf("%%i: %i\n", num);
//     ft_printf("%%u: %u\n", unsig_num);
//     ft_printf("%%x: %x\n", num);
//     ft_printf("%%X: %X\n", num);
//     ft_printf("%%%%: %%\n");

//     return (0);
// }
