/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:01:52 by snagulap          #+#    #+#             */
/*   Updated: 2023/02/20 22:32:54 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnumlen(unsigned int num)
{
	int				len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int num)
{
	char			*n;
	int				len;
	long long int	dec;

	dec = num;
	len = ft_printnumlen(dec);
	n = malloc(len + 1);
	if (!n)
		return (NULL);
	n[len] = 0;
	len -= 1;
	while (len >= 0)
	{
		n[len] = dec % 10 + 48;
		dec = dec / 10;
		len--;
	}
	return (n);
}

int	ft_print_uns(unsigned int num)
{
	int				len;
	char			*n;

	len = 0;
	n = ft_uitoa(num);
	if (!n)
		return (0);
	len = ft_printstr(n);
	free(n);
	return (len);
}

int	ft_print_num(int num)
{
	int		len;
	char	*n;

	len = 0;
	n = ft_itoa(num);
	if (!n)
		return (-1);
	len = ft_printstr(n);
	free(n);
	return (len);
}
