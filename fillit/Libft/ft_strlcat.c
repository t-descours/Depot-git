/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:40:56 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/14 15:42:36 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s1;

	i = 0;
	while (dst[i] && i < size)
		i++;
	s1 = i;
	while (src[i - s1] && i < size - 1)
	{
		dst[i] = src[i - s1];
		i++;
	}
	if (s1 < size)
		dst[i] = '\0';
	return (s1 + ft_strlen(src));
}
