/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:30:48 by tdescour          #+#    #+#             */
/*   Updated: 2016/11/25 14:24:57 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **tab, int c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (j < c)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		j++;
		i++;
	}
}
