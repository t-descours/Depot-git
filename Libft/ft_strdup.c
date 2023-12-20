/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:52:11 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/15 13:36:48 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*strnew;
	int		i;

	i = ft_strlen(s1);
	strnew = (char*)malloc(sizeof(*strnew) * (i + 1));
	if (!strnew)
		return (NULL);
	return (ft_strcpy(strnew, s1));
}
