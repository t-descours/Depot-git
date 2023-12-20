/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:40:32 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/15 17:58:48 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *src, char const *dst)
{
	char	*str;
	int		len;

	if (!src || !dst)
		return (NULL);
	len = ft_strlen(src) + ft_strlen(dst);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, src);
	ft_strcat(str, dst);
	return (str);
}
