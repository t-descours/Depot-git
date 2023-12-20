/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnt_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:49:11 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/23 12:12:33 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_cnt_words(const char *s, char c)
{
	int		cnt;
	int		is;

	is = 0;
	cnt = 0;
	while (*s != '\0')
	{
		if (is == 1 && *s == c)
			is = 0;
		if (is == 0 && *s != c)
		{
			is = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}
