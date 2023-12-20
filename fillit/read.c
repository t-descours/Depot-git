/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <fpasteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 15:28:15 by fpasteau          #+#    #+#             */
/*   Updated: 2017/06/09 05:29:33 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_nbtetri(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
		{
			if (str[i + 2] == '.' || str[i + 2] == '#')
				j++;
		}
		i++;
	}
	return (j);
}

char		*ft_read(int fd)
{
	char	*buffer;
	int		ret;

	buffer = ft_memalloc(BUFFER_SIZE + 1);
	ret = read(fd, buffer, BUFFER_SIZE);
	buffer[ret] = '\0';
	return (buffer);
}

int			**ft_tabcpy(int **tab)
{
	int		**newtab;
	int		i;
	int		j;

	i = -1;
	newtab = (int**)ft_memalloc(sizeof(int **) * 2);
	while (++i < 2)
		newtab[i] = (int*)ft_memalloc(sizeof(int *) * 4);
	i = -1;
	while (++i < 2)
	{
		j = -1;
		while (j++ < 4)
			newtab[i][j] = tab[i][j];
	}
	return (newtab);
}

int			**ft_coord_tetri2(int y, int j, int **tab, int x)
{
	tab[0][y] = j;
	tab[1][y] = x;
	return (tab);
}

int			main(int ac, char **av)
{
	int		fd;
	char	*str;
	int		***tab;

	tab = NULL;
	if (ac == 1)
	{
		ft_putendl("usage : ./fillit sample");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	str = ft_read(fd);
	if (!ft_error(str))
		ft_exit();
	if ((ft_strlen(str) == 20))
	{
		tab = ft_parseur(str);
		tab[1] = NULL;
	}
	else
		tab = ft_parseur(str);
	ft_fillit(tab, ft_nbtetri(str));
	return (0);
}
