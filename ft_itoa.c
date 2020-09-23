/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 02:13:34 by qmattor           #+#    #+#             */
/*   Updated: 2020/03/10 20:09:58 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*addneg(char *str)
{
	char	*temp;

	temp = str;
	str = ft_strjoin("-", str);
	free(temp);
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		flag;
	long	temp;
	int		i;

	i = 0;
	str = ft_strnew(10);
	temp = n;
	temp == 0 ? str[0] = 48 : 0;
	if (n == 0)
		return (str);
	flag = temp < 0 ? 1 : 0;
	temp = temp < 0 ? -temp : temp;
	while (temp > 0)
	{
		str[i++] = (temp % 10) + 48;
		temp /= 10;
	}
	ft_strrev(str);
	str = flag ? addneg(str) : str;
	return (str);
}
