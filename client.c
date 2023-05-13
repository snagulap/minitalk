/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:08:03 by snagulap          #+#    #+#             */
/*   Updated: 2023/04/24 14:43:42 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include"ft_printf/ft_printf.h"

void	message(int pid, char msg)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((msg >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i++;
	}
}

int	strtoint(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc != 3)
		return (0);
	pid = strtoint(argv[1]);
	if (pid == 0)
	{
		write (1, "please enter the pid argv[1]", 29);
		return (1);
	}
	while (argc == 3 && argv[2][i])
	{
		message(pid, argv[2][i]);
		i++;
	}
	return (0);
}
