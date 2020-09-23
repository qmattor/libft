/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:19:58 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/05 23:15:40 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char *c;
	char *z;

	if (str == NULL)
		return (str);
	c = malloc(ft_strlen(str) + 1);
	z = c;
	while (*str)
		*c++ = *str++;
	*c = 0;
	return (z);
}
