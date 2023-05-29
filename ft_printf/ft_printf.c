/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:39:59 by snagulap          #+#    #+#             */
/*   Updated: 2023/02/21 21:48:02 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(va_list args, char format)
{
	int	plen;

	plen = 0;
	if (format == 'c')
		return (plen += ft_printchar(va_arg(args, int)));
	else if (format == 's')
		return (plen += ft_printstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (plen += ft_print_num(va_arg(args, int)));
	else if (format == 'u')
		return (plen += ft_print_uns(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (plen += ft_printhex(va_arg(args, unsigned int), format));
	else if (format == 'p')
		return (plen += ft_print_pointer(va_arg(args, void *)));
	else if (format == '%')
		return (plen += ft_printchar('%'));
	else if (format)
		return (plen += ft_printchar(format));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("csdiuxXp%", format[i + 1]) != 0)
		{
				len += ft_print(args, format[i + 1]);
				i++;
		}
		else
			len += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
