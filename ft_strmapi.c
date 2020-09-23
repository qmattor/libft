/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 00:09:49 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/06 21:46:24 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	char	*start;
	char	*str;
	int		x;

	if (s == NULL || f == NULL)
		return (NULL);
	x = 0;
	str = (char *)s;
	newstr = malloc(ft_strlen(str));
	start = newstr;
	while (*str)
	{
		*newstr = f(x, *str);
		x++;
		str++;
		newstr++;
	}
	return (start);
}
