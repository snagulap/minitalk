/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:19:39 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/23 17:28:40 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dlen;
	size_t	x;
	size_t	slen;
	size_t	i;

	if (!dst && !n)
		return (0);
	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	x = dlen;
	if (dlen < n - 1 && n > 0)
	{
		while (src[i] != '\0' && (dlen + i) < n - 1)
		{
			dst[x] = src[i];
			x++;
			i++;
		}
		dst[x] = '\0';
	}
	if (dlen >= n)
		dlen = n;
	return (dlen + slen);
}
