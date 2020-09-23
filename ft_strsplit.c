/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 01:16:56 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/10 04:16:38 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		z[5];

	if (s == NULL || *s == 0)
	{
		tab = malloc(sizeof(void *));
		tab[0] = 0;
		return (tab);
	}
	tab = malloc(sizeof(char *) * (ft_countforstrings(c, (char *)s) + 1));
	z[4] = 0;
	while (z[4] < 4)
		z[z[4]++] = 0;
	while (s[z[1]] == c)
		z[1]++;
	ft_wowthatsgross(tab, z, s, c);
	tab[z[3]++] = s[z[1] - 1] != c ? ft_strsub(s, z[1] - z[2], z[2]) : NULL;
	tab[z[3]] = NULL;
	return (tab);
}
