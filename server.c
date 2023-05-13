/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:05:48 by snagulap          #+#    #+#             */
/*   Updated: 2023/04/24 14:07:14 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minitalk.h"
#include"ft_printf/ft_printf.h"

void	handler(int signo)
{
	static char	msg;
	static int	bit;

	if (signo == SIGUSR1)
		msg |= (1 << bit);
	else if (signo == SIGUSR2)
		msg &= (~(1 << bit));
	bit++;
	if (bit == 8)
	{
		write(STDOUT_FILENO, &msg, 1);
		msg = 0;
		bit = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	act;

	act.sa_handler = &handler;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	ft_printf("The server PID: %d\n", getpid());
	while (*argv)
	{
		sigaction(SIGUSR1, &act, NULL);
		sigaction(SIGUSR2, &act, NULL);
	}
	return (0);
}
