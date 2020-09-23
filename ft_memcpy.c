/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:28:45 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/09 11:04:53 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*newdest;
	char	*newsrc;

	if (dest == NULL || src == NULL)
		return (dest);
	newdest = (char *)dest;
	newsrc = (char *)src;
	while (n-- > 0)
		*newdest++ = *newsrc++;
	return (dest);
}
