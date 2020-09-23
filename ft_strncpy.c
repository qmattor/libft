/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:07:03 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/10 08:06:17 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	char	*ogptr;
	int		flag;

	flag = 0;
	ogptr = dest;
	while (n--)
	{
		if (*src == 0)
			flag = 1;
		if (flag)
			*dest++ = 0;
		else
			*dest++ = *src++;
	}
	*dest = 0;
	return (ogptr);
}
