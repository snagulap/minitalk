/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:19:25 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/27 14:32:58 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ssrc;
	unsigned char	*ddst;

	i = 0;
	ssrc = (unsigned char *)src;
	ddst = (unsigned char *)dest;
	if (!dest && !src)
		return ((dest));
	while (i < n)
	{
		ddst[i] = ssrc[i];
		i++;
	}
	return ((void *)(ddst));
}
