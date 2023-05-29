/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:10:09 by snagulap          #+#    #+#             */
/*   Updated: 2023/02/21 21:44:58 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_hex_num(unsigned long num)
{
	int				i;

	i = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

char	*hex_str(unsigned long num, char base)
{
	char	*hex;
	int		size;
	int		num_re;

	size = count_hex_num(num);
	hex = (char *)malloc(size + 1);
	if (!hex)
		return (NULL);
	hex[size] = 0;
	while (--size >= 0)
	{
		num_re = num % 16;
		if (num_re <= 9)
			hex[size] = num_re + '0';
		else
		{
			if (base == 'x')
				hex[size] = num_re - 10 + 'a';
			else if (base == 'X')
				hex[size] = num_re - 10 + 'A';
		}
		num = num / 16;
	}
	return (hex);
}

int	ft_printhex(unsigned int num, char base)
{
	int		len;
	char	*hex;

	hex = hex_str((unsigned long) num, base);
	if (!hex)
		return (0);
	len = ft_printstr(hex);
	free(hex);
	return (len);
}

int	ft_print_pointer(void *p)
{
	int				len;
	char			*hex;
	unsigned long	num;

	len = 0;
	num = (unsigned long)p;
	hex = hex_str(num, 'x');
	if (!hex)
		return (0);
	len = ft_printstr("0x");
	len += ft_printstr(hex);
	free(hex);
	return (len);
}
