/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 14:28:45 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/08 04:26:11 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	void	*p;

	p = ft_memchr(src, c, n);
	p != NULL ? ft_memcpy(dest, src, p - src + 1) : ft_memcpy(dest, src, n);
	return (p == NULL ? NULL : (dest + (p - src + 1)));
}
