/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 19:14:09 by qmattor           #+#    #+#             */
/*   Updated: 2020/03/10 19:29:21 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	int		x;
	int		i;
	char	temp;

	if (!str)
		return ;
	x = ft_strlen(str) / 2;
	i = 0;
	while (i < x)
	{
		temp = str[i];
		str[i] = str[ft_strlen(str) - i - 1];
		str[ft_strlen(str) - i - 1] = temp;
		i++;
	}
}
