/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 00:39:00 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/10 04:20:39 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*substart;
	char	*startptr;

	if ((int)len < 0)
		return (NULL);
	substr = malloc(len + 1);
	substart = substr;
	startptr = (char *)&(s[start]);
	if (s != NULL)
	{
		while (len--)
		{
			*substr = *startptr;
			substr++;
			startptr++;
		}
		substr = 0;
	}
	return (substart);
}
