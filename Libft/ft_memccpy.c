/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:38:44 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/15 14:00:45 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n)
	{
		while (i < n)
		{
			*((char *)dst + i) = *((char *)src + i);
			if (*((char *)src + i) == (char)c)
			{
				return ((char *)dst + i + 1);
			}
			i++;
		}
	}
	return (NULL);
}
