/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:34:46 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/02/13 20:55:24 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int	server_pid(void)
{
	int	pid;

	pid = getpid();
	return (pid);
}

void	action(int sig)
{
	static char			c = 0;
	static unsigned int	i = 0;

	if (sig == SIGUSR2)
		c += 1 << i;
	if (++i == 8)
	{
		if (c == 0)
			ft_printf("\n");
		else
			ft_printf("%c", c);
		c = 0;
		i = 0;
	}
}

void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
	{
		action(signum);
	}
	else if (signum == SIGUSR2)
	{
		action(signum);
	}
}

int	main(void)
{
	ft_printf("the server PID is : %d\n", server_pid());
	signal(SIGUSR2, signal_handler);
	signal(SIGUSR1, signal_handler);
	while (1)
		pause();
	return (0);
}
