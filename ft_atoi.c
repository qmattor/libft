/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:02:55 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/05 02:56:07 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		neg;
	long	res;
	char	*start;

	neg = 0;
	res = 0;
	start = str;
	if (str == NULL)
		return (0);
	while (ft_iswhtspc(*str))
		str++;
	neg = *str == '-' ? 1 : 0;
	str = *str == '-' ? str + 1 : str;
	if (start != str)
		str = *str == '+' && *(str - 1) != '-' ? str + 1 : str;
	else
		str = *str == '+' ? str + 1 : str;
	while (1)
	{
		if (*str < '0' || *str > '9')
			break ;
		res = (res * 10) + *str++ - 48;
	}
	res = neg ? -res : res;
	return ((int)res);
}
