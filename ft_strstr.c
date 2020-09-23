/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:48:23 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/06 20:38:59 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int oloopc;
	int needlelen;
	int haylen;

	i = -1;
	oloopc = 0;
	needlelen = ft_strlen(needle);
	haylen = ft_strlen(haystack);
	while ((oloopc + needlelen) <= haylen)
	{
		while (++i < needlelen)
			if (needle[i] != haystack[oloopc + i])
				break ;
		if (i == needlelen)
			return (haystack + oloopc);
		i = -1;
		oloopc++;
	}
	return (((void *)0));
}
