/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:19:35 by snagulap          #+#    #+#             */
/*   Updated: 2023/02/11 20:13:08 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, size_t c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((char )c == s[i])
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return (&(s[i]));
	return (NULL);
}
