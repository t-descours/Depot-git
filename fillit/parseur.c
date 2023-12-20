/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <fpasteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 13:48:32 by fpasteau          #+#    #+#             */
/*   Updated: 2017/06/09 05:35:34 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			***ft_parseur(char *str)
{
	int		i;
	int		j;
	char	*str2;
	char	*str3;
	int		***tab;

	j = 0;
	tab = ft_memtab(ft_nbtetri(str));
	i = 0;
	if (ft_strlen(str) < 20)
		ft_exit();
	while (str[i] != '\0')
	{
		str2 = ft_strcut(&str[i], 20);
		str3 = ft_strsubc(str2, '\n');
		ft_check(str3, str, str2);
		tab[j] = ft_coord_tetri(str3);
		j++;
		i = i + 21;
	}
	return (tab);
}

void		ft_puttab(char **tab, int h)
{
	int		i;

	i = 0;
	while (i < h)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

char		*ft_strcut(char *str, int n)
{
	char	*str2;
	int		i;

	str2 = ft_strnew(n);
	i = -1;
	while (++i < n)
		str2[i] = str[i];
	return (str2);
}

int			**ft_coord_tetri(char *str)
{
	t_coord	coord;
	int		**tab;

	coord.i = 0;
	coord.x = 0;
	coord.y = 0;
	coord.j = 0;
	tab = (int**)ft_memalloc(sizeof(int*) * 2);
	tab[0] = (int*)ft_memalloc(sizeof(int) * 4);
	tab[1] = (int*)ft_memalloc(sizeof(int) * 4);
	while (str[coord.i])
	{
		if (coord.i == 4 || coord.i == 8 || coord.i == 12 || coord.i == 16)
		{
			coord.j = 0;
			coord.x++;
		}
		if (str[coord.i++] == '#')
		{
			tab[0][coord.y] = coord.j;
			tab[1][coord.y++] = coord.x;
		}
		coord.j++;
	}
	return (tab);
}

void		ft_printab(int **tab)
{
	int		i;
	int		j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
