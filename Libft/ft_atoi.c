/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpasteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:51:03 by fpasteau          #+#    #+#             */
/*   Updated: 2016/11/15 17:10:54 by fpasteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 0;
	res = 0;
	while (nptr[i] > 0 && nptr[i] < 33)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
		res = res * 10 + nptr[i++] - '0';
	if (neg == 1)
		res = -res;
	return (res);
}
