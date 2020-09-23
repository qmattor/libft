/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 23:29:23 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/11 08:11:53 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*data;
	char	*temp;

	if (!(data = malloc(size)))
		return (NULL);
	temp = data;
	while (size--)
		*temp++ = 0;
	return (data);
}
