/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 00:52:12 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/16 21:09:31 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		x;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return ((char *)s2);
	else if (s2 == NULL)
		return ((char *)s1);
	newstr = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	x = -1;
	while (s1[++x])
		newstr[x] = s1[x];
	newstr[x] = 0;
	newstr = ft_strcat(newstr, (char *)s2);
	newstr[ft_strlen((char *)s1) + ft_strlen((char *)s2)] = 0;
	return (newstr);
}
