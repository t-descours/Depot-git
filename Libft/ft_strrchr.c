/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:50:37 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/09 19:54:04 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s + ft_strlen(s);
	while (*cur != c)
	{
		if (cur == s)
		{
			return (NULL);
		}
		cur--;
	}
	return (cur);
}
