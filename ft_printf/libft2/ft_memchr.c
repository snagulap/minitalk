/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:26:15 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/14 13:56:52 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*str;

	i = 0;
	str = (char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((char)c == str[i])
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
