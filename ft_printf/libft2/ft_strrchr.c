/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:20:02 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/13 13:08:00 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	index;

	len = 0;
	index = 0;
	while (*(s + index))
	{
		if ((char )c == *(s + index))
		{
			len = index;
		}
		index++;
	}
	if ((char)c == '\0')
		return ((char *)(s + index));
	if ((char)c == *(s + len))
		return ((char *)(s + len));
	return (0);
}
