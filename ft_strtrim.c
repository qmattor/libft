/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 00:59:30 by qmattor           #+#    #+#             */
/*   Updated: 2020/02/23 13:42:46 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*newstr;
	char	*nsstart;
	int		i;
	char	*tmp;

	if (s == NULL)
		return ((char *)s);
	i = 0;
	newstr = ft_strdup((char *)s);
	nsstart = newstr;
	while (ft_iswhtspc(*newstr))
		newstr++;
	i = ft_strlen(newstr) - 1;
	while (ft_iswhtspc(newstr[i]))
		i--;
	newstr[i + 1] = 0;
	tmp = ft_strdup(newstr);
	free(nsstart);
	return (tmp);
}
