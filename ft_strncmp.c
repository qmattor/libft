/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 23:17:23 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/11 00:35:25 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *str1, char *str2, size_t n)
{
	unsigned char a;
	unsigned char b;

	if (n == 0)
		return (0);
	while (*str1 && *str2 && --n > 0)
	{
		a = (unsigned char)*str1;
		b = (unsigned char)*str2;
		if (a != b)
			return (a - b);
		str1++;
		str2++;
	}
	a = (unsigned char)*str1;
	b = (unsigned char)*str2;
	if (*str1 == *str2 && !n)
		return (0);
	return (a - b);
}
