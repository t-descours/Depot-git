/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <fpasteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 16:30:10 by fpasteau          #+#    #+#             */
/*   Updated: 2017/06/09 05:30:14 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_checkx(char **map, int **tetri)
{
	int		i;
	int		k;

	k = ft_strlen(map[0]);
	i = -1;
	while (++i < 4)
	{
		if ((tetri[0][i] + 1) > k)
			return (0);
	}
	return (1);
}

int			ft_checky(char **map, int **tetri)
{
	int		i;
	int		k;

	k = ft_strlen(map[0]);
	i = -1;
	while (++i < 4)
	{
		if ((tetri[1][i] + 1) > k)
			return (0);
	}
	return (1);
}

int			ft_solve(char ***map, int ***tab, int i, char id)
{
	int		**tetri;
	char	c;

	c = id;
	if (tab[i] == NULL)
		return (1);
	tetri = ft_tabcpy(tab[i]);
	while (ft_checky(*map, tetri) != 0)
	{
		tetri = ft_setetrix(tetri, *map);
		while (ft_checkx(*map, tetri) == 1)
		{
			if (ft_mapif(tetri, *map) == 1)
			{
				*map = ft_placetetri(*map, tetri, c);
				if (ft_solve(map, tab, ++i, ++id) == 1)
					return (1);
				else
					*map = ft_freelastetri(*map, c, i--, id--);
			}
			tetri = ft_tetriaddx(tetri);
		}
		tetri = ft_tetriaddy(tetri);
	}
	return (0);
}

void		ft_fillit(int ***tab, int nbtetri)
{
	int		i;
	char	id;
	char	**map;

	i = 0;
	id = 'A';
	map = ft_allocmap(2);
	tab = ft_setalltetri(tab, nbtetri);
	map = ft_fillmap(map);
	while (ft_solve(&map, tab, i, id) == 0)
		map = ft_upgrademap(map);
	ft_printmap(map);
}

void		ft_exit(void)
{
	ft_putendl("error");
	exit(0);
}
