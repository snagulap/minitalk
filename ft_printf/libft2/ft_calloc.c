/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:52:09 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/21 16:49:09 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;
	size_t	total;

	i = 0;
	total = count * size;
	if (size && total / size != count)
		return (NULL);
	str = (char *)malloc(count * sizeof(char) *(size));
	if (!str)
		return (NULL);
	ft_bzero (str, count * size);
	return ((void *)(str));
}
