/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:40:16 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/07 01:49:24 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*copy;

	if (src == NULL)
		return (NULL);
	copy = (unsigned char *)src;
	while (n--)
	{
		if (*copy == (unsigned char)c)
			return ((void *)copy);
		copy++;
	}
	return (NULL);
}
