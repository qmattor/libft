/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:12:29 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/09 12:14:10 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		x;
	char	*ptr;

	if (str == NULL)
		return (NULL);
	if (c == 0)
		return ((char *)&str[ft_strlen((char *)str)]);
	x = 0;
	while (str[x])
	{
		if (str[x] == c)
		{
			ptr = (char *)&(str[x]);
			return (ptr);
		}
		x++;
	}
	return (NULL);
}
