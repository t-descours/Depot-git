/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_catcher_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdescour <tdescour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 18:19:10 by tdescour          #+#    #+#             */
/*   Updated: 2019/06/01 12:11:10 by tdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minishell.h"

void		sig_catcher(int num)
{
	if (num == SIGINT)
	{
		write(1, "\n", 1);
		g_ms.last_cmd_rtn = 130;
	}
	else if (num == SIGQUIT)
	{
		write(1, "Quit (core dumped)\n", 19);
		g_ms.last_cmd_rtn = 131;
	}
}

void		sigcatcher_init(void)
{
	if (signal(SIGINT, sig_catcher) == SIG_ERR)
		exit(ERROR_SIGINT);
	if (signal(SIGQUIT, sig_catcher) == SIG_ERR)
		exit(ERROR_SIGQUIT);
}
