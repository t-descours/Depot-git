/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drydi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <fpasteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 02:06:27 by fpasteau          #+#    #+#             */
/*   Updated: 2017/06/09 03:03:32 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			**ft_setetri(int **tab)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	while (++i < 2)
	{
		k = 3;
		j = -1;
		while (++j < 4)
		{
			if (tab[i][j] < k)
				k = tab[i][j];
		}
		j = -1;
		while (++j < 4)
			tab[i][j] = tab[i][j] - k;
	}
	return (tab);
}

int			**ft_setetrix(int **tetri, char **map)
{
	int		i;
	int		k;

	i = -1;
	k = ft_strlen(map[0]) - 1;
	while (++i < 4)
	{
		if (tetri[0][i] < k)
			k = tetri[0][i];
	}
	i = -1;
	while (++i < 4)
		tetri[0][i] = tetri[0][i] - k;
	return (tetri);
}

char		**ft_placetetri(char **map, int **tetri, char id)
{
	int		i;

	i = -1;
	while (++i < 4)
		map[tetri[1][i]][tetri[0][i]] = id;
	return (map);
}

char		**ft_freemap(char **map)
{
	int		i;
	int		j;

	i = -1;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
			map[i][j] = '.';
	}
	return (map);
}

char		**ft_upgrademap(char **map)
{
	char	**mapnew;
	int		len;

	len = ft_strlen(map[0]);
	mapnew = ft_allocmap(len + 1);
	mapnew = ft_fillmap(mapnew);
	return (mapnew);
}
