/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 23:17:23 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/10 08:32:33 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *str1, char *str2)
{
	unsigned char c;
	unsigned char b;

	c = 0;
	b = 0;
	while (*str1 && *str2)
	{
		c = *str1;
		b = *str2;
		if (b != c)
			return (c - b);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	c = *str1;
	b = *str2;
	return (c - b);
}
