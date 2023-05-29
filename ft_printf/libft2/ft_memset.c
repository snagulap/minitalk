/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:19:31 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/10 02:43:09 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *) str;
	while (i < n)
	{
		s[i] = (char )ch;
		i++;
	}
	return ((void *)(s));
}
