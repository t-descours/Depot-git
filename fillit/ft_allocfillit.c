/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocfillit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <fpasteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 13:52:52 by fpasteau          #+#    #+#             */
/*   Updated: 2017/06/09 05:02:49 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_fillmap(char **map)
{
	int		i;
	int		j;

	i = -1;
	while (map[++i])
	{
		j = -1;
		while (map[++j])
			map[i][j] = '.';
	}
	return (map);
}

void		ft_printmap(char **map)
{
	int		i;

	i = -1;
	while (map[++i])
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
	}
}

int			***ft_memtab(int len)
{
	int		***tab;
	int		i;
	int		j;

	i = -1;
	j = 0;
	while (!(tab = (int***)ft_memalloc(sizeof(int **) * (len))))
		continue ;
	tab[len] = NULL;
	while (++i < 2)
	{
		if (!(tab[i] = (int**)ft_memalloc(sizeof(int *) * 4)))
			return (NULL);
	}
	return (tab);
}

char		**ft_allocmap(int len)
{
	char	**map;
	int		i;

	i = -1;
	map = (char**)ft_memalloc(sizeof(char*) * (len + 1));
	if (!map)
		return (NULL);
	map[len + 1] = NULL;
	while (++i < len)
	{
		if (!(map[i] = (char*)ft_memalloc(sizeof(char) * (len + 1))))
			return (NULL);
	}
	return (map);
}

int			ft_check(char *str, char *buff, char *str2)
{
	if (ft_count(str) == 1 || ft_connec(str) == 1 || ft_check_back(buff) == 1)
		ft_exit();
	if (!ft_check2(str2))
		ft_exit();
	return (1);
}
