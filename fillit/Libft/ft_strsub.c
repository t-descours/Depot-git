/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:40:45 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/30 16:26:42 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sn;
	int		i;

	i = 0;
	sn = ft_strnew(len);
	if (!sn || !s)
		return (NULL);
	while (len > 0)
	{
		sn[i] = s[start + i];
		i++;
		len--;
	}
	return (sn);
}
