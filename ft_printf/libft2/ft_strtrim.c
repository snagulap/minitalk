/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:42:29 by snagulap          #+#    #+#             */
/*   Updated: 2022/12/19 17:57:46 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		x;
	char	*strtrim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_set(s1[j - 1], set))
		j--;
	strtrim = (char *)malloc(sizeof(char) * (j - i + 1));
	if (strtrim == NULL)
		return (NULL);
	x = 0;
	while (i < j)
		strtrim[x++] = s1[i++];
	strtrim[x] = '\0';
	return (strtrim);
}
