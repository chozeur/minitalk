/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:48:30 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 07:23:06 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SERVER*/

#include "../include/minitalk.h"

int	main(void)
{
	struct sigaction	s_signal;

	s_signal.sa_flags = SA_SIGINFO;
	s_signal.sa_handler = NULL;
	s_signal.sa_sigaction = handler_server;
	sigaction(SIGUSR1, &s_signal, NULL);
	sigaction(SIGUSR2, &s_signal, NULL);
	print_pid();
	while (1)
		pause();
	return (0);
}
