/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrylstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 23:43:41 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/21 23:49:10 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arraylist	*ft_arrylstnew(size_t size)
{
	t_arraylist *temp;

	if (size == 0)
		size = 10;
	temp = malloc(sizeof(t_arraylist));
	if (!(temp->array = malloc(sizeof(void *))))
		return (NULL);
	if (!(temp->inuse = ft_strnew(size)))
		return (NULL);
	temp->elesize = sizeof(void *);
	temp->arraysize = (int)size;
	return (temp);
}
