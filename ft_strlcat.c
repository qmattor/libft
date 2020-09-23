/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:49:14 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/09 07:46:42 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const char	*odst = dest;
	const char	*osrc = src;
	size_t		n;
	size_t		dlen;

	n = size;
	while (n-- != 0 && *dest != '\0')
		dest++;
	dlen = dest - odst;
	n = size - dlen;
	if (n-- == 0)
		return (dlen + ft_strlen((char *)src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dest++ = *src;
			n--;
		}
		src++;
	}
	*dest = '\0';
	return (dlen + (src - osrc));
}
