/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 23:53:12 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/06 17:42:34 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	char	*start;

	if (s == NULL || f == NULL)
		return (NULL);
	newstr = malloc(ft_strlen((char *)s));
	start = newstr;
	while (*s)
	{
		*newstr = f(*s);
		newstr++;
		s++;
	}
	return (start);
}
