/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:48:23 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/11 07:53:31 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	unsigned int	i;
	unsigned int	pos;
	size_t			needlesize;

	if (!*needle)
		return (haystack);
	pos = 0;
	i = 0;
	needlesize = (size_t)ft_strlen(needle);
	while (haystack[pos] && (size_t)pos + needlesize <= n)
	{
		if (haystack[pos] == needle[0])
		{
			while (haystack[pos + i] == needle[i]
			&& haystack[pos + i] && needle[i])
				i++;
			if (needle[i] == 0)
				return (haystack + pos);
		}
		i = 0;
		pos++;
	}
	return (NULL);
}
