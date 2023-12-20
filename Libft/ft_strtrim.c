/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:40:22 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/22 11:50:14 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	while (s[l - 1] == ' ' || s[l - 1] == '\n' || s[l - 1] == '\t')
		l--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\n' || s[i] == '\t')
		l--;
	if (l <= 0)
		l = 0;
	str = ft_strnew(l);
	if (!str || !s)
		return (NULL);
	s += i;
	i = -1;
	while (++i < l)
		str[i] = *s++;
	return (str);
}
