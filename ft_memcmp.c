/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:09:56 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/07 03:59:44 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arg1, const void *arg2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	if (arg1 == NULL || arg2 == NULL)
		return (0);
	str1 = (unsigned char *)arg1;
	str2 = (unsigned char *)arg2;
	while (n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
