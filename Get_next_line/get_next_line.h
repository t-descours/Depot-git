/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdescour <tdescour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 10:29:57 by tdescour          #+#    #+#             */
/*   Updated: 2017/11/04 10:12:57 by tdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

int					get_next_line(int fd, char **line);
int					has_return(char *str);

size_t				ft_strlen(const char *s);

char				*join_str(const char *s1, const char *s2);

#endif
