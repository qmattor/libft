/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countforstrings.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:47:09 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/09 01:57:16 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countforstrings(char identifier, char *src)
{
	int x;

	x = 0;
	while (*src)
	{
		if ((*src == identifier) && (*(src + 1) != identifier))
			x++;
		src++;
	}
	return (x + 1);
}
