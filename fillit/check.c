/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdescour <tdescour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 14:16:59 by tdescour          #+#    #+#             */
/*   Updated: 2017/06/09 05:27:38 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_check2(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '\n')
		{
			if (str[i + 1] == '\n' || str[i + 2] == '\n')
				return (0);
			if (str[i + 3] == '\n' || str[i + 4] == '\n')
				return (0);
		}
	}
	return (1);
}

int			ft_count(char *str)
{
	int		i;
	int		p;
	int		d;

	i = 0;
	p = 0;
	d = 0;
	while (str[i])
	{
		if (str[i] == '.')
			p++;
		if (str[i] == '#')
			d++;
		i++;
	}
	if (d == 4 && p == 12)
		return (0);
	else
		return (1);
}

int			ft_check_back(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '\n' && str[i + 1] == '\n' && str[i + 2] == '\n')
			return (1);
	}
	return (0);
}

int			ft_connec(char *str)
{
	int		i;
	int		co;

	i = 0;
	co = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			if (str[i + 1] == '#')
				co++;
			if (str[i - 1] == '#')
				co++;
			if (str[i + 4] == '#')
				co++;
			if (str[i - 4] == '#')
				co++;
		}
		i++;
	}
	if (co == 6 || co == 8)
		return (0);
	else
		return (1);
}

int			ft_error(char *buff)
{
	size_t		i;

	i = 20;
	while (i < 546)
	{
		if (ft_strlen(buff) == i)
			return (1);
		i = i + 21;
	}
	return (0);
}
