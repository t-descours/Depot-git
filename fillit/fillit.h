/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <fpasteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 03:21:17 by fpasteau          #+#    #+#             */
/*   Updated: 2017/06/09 05:35:16 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFFER_SIZE 4096
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "./Libft/libft.h"

typedef	struct	s_coord
{
	int			x;
	int			y;
	int			j;
	int			i;
}				t_coord;

int				ft_checkx(char **map, int **tetri);
int				ft_checky(char **map, int **tetri);
int				ft_solve(char ***map, int ***tab, int i, char id);
void			ft_fillit(int ***tab, int nbtetri);
void			ft_exit(void);
int				***ft_parseur(char *str);
void			ft_puttab(char **tab, int h);
char			*ft_strcut(char *str, int n);
int				**ft_coord_tetri(char *str);
void			ft_printab(int **tab);
int				ft_check2(char *str);
int				ft_count(char *str);
int				ft_check_back(char *str);
int				ft_connec(char *str);
int				ft_error(char *buff);
int				**ft_setetri(int **tab);
int				**ft_setetrix(int **tetri, char **map);
char			**ft_placetetri(char **map, int **tetri, char id);
char			**ft_freemap(char **map);
char			**ft_upgrademap(char **map);
char			**ft_fillmap(char **map);
void			ft_printmap(char **map);
int				***ft_memtab(int len);
char			**ft_allocmap(int len);
int				ft_check(char *str, char *buff, char *str2);
size_t			ft_nbtetri(char *str);
char			*ft_read(int fd);
int				**ft_tabcpy(int **tab);
int				**ft_coord_tetri2(int y, int j, int **tab, int x);
int				**ft_tetriaddx(int **tetri);
int				**ft_tetriaddy(int **tetri);
int				ft_mapif(int **tetri, char **map);
char			**ft_freelastetri(char **map, char id, int x, char c);
int				***ft_setalltetri(int ***tab, int nbtetri);

#endif
