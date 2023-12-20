/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:55:42 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/25 14:29:55 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsubc(char *str, char c)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	len = 0;
	i = -1;
	while (str[++i])
		if (str[i] == c)
			len++;
	new = (char*)malloc(sizeof(*new) * (ft_strlen(str) - len) + 1);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			new[j] = str[i];
			j++;
		}
		i++;
	}
	new[j] = '\0';
	ft_strdel(&str);
	return (new);
}
