/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:19:58 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/21 16:38:00 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//haysteek and needle returns an  address to the big where 
//small is located otherwise NULL
char	*ft_strnstr(const char *str, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str && !len)
		return (NULL);
	i = ft_strlen(str);
	j = ft_strlen(str2);
	if (i < j || len < j)
		return (0);
	while (len-- >= j || !str2)
	{
		if (ft_memcmp((char *)str, (char *)str2, j) == 0)
			return ((char *)str);
		str++;
	}
	return (0);
}
