/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:36:55 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/02/13 21:27:07 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int	check_arguments(int args, char *str)
{
	if (args == 3)
	{
		if (ft_isdigit(*str) == 0)
			return (0);
	}
	else
		ft_printf("wrong number of arguments\n");
	return (1);
}

void	send_char(char c, int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		c = c >> 1;
		usleep(300);
		++i;
	}
}

int	send_msg(char *msg, int pid)
{
	while (*msg)
	{
		send_char(*msg, pid);
		++msg;
	}
	send_char(0, pid);
	send_char('\n', pid);
	return (0);
}

int	main(int ac, char **av)
{
	int	pid;

	if (check_arguments(ac, av[1]) == 0)
	{
		pid = ft_atoi(av[1]);
		ft_printf("sending message...\n");
	}
	else
		return (1);
	send_msg(av[2], pid);
	return (0);
}
