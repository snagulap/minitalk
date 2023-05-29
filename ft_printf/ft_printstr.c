/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:14:53 by snagulap          #+#    #+#             */
/*   Updated: 2023/02/21 21:48:39 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	if (write(1, &c, 1) < 0)
		return (-1);
	return (1);
}

int	ft_printstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) < 0)
			return (-1);
		else
			return (6);
	}
	len = ft_strlen(s);
	if (write(1, s, len) < 0)
		return (-1);
	return (len);
}
