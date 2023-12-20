/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thepgmlp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <fpasteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 02:07:41 by fpasteau          #+#    #+#             */
/*   Updated: 2017/06/09 03:56:30 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			**ft_tetriaddx(int **tetri)
{
	int		i;

	i = -1;
	while (++i < 4)
		tetri[0][i] = tetri[0][i] + 1;
	return (tetri);
}

int			**ft_tetriaddy(int **tetri)
{
	int		i;

	i = -1;
	while (++i < 4)
		tetri[1][i] = tetri[1][i] + 1;
	return (tetri);
}

int			ft_mapif(int **tetri, char **map)
{
	int		i;

	i = -1;
	while (++i < 4)
		if (map[tetri[1][i]][tetri[0][i]] != '.')
			return (0);
	return (1);
}

char		**ft_freelastetri(char **map, char id, int x, char c)
{
	int		i;
	int		j;

	i = -1;
	c = 'w';
	x = 42;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == id)
				map[i][j] = '.';
		}
	}
	return (map);
}

int			***ft_setalltetri(int ***tab, int nbtetri)
{
	int		i;

	i = -1;
	while (++i < nbtetri)
		tab[i] = ft_setetri(tab[i]);
	return (tab);
}
