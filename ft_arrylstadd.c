/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrylstadd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 21:55:08 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/21 23:43:29 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	increasespace(long int spot, void *elem, t_arraylist *arrylst)
{
	void		**new;
	char		*newchar;
	long int	size;

	size = arrylst->arraysize;
	while (arrylst->arraysize < (size_t)spot)
		arrylst->arraysize *= 2;
	if (!(new = malloc(arrylst->elesize * arrylst->arraysize)))
		return (1);
	if (!(newchar = ft_strnew(arrylst->arraysize)))
		return (1);
	ft_benull(new, arrylst->arraysize);
	ft_memcpy(new, arrylst->array, size);
	free(arrylst->array);
	ft_memcpy(newchar, arrylst->inuse, size);
	free(arrylst->inuse);
	*(new + (spot * arrylst->elesize)) = elem;
	arrylst->array = new;
	arrylst->inuse = newchar;
	arrylst->inuse[spot] = 1;
	return (0);
}

static int	shiftdown(long int s, void *elem, t_arraylist *a)
{
	void	**na;
	char	*newinuse;

	if (a->inuse[a->arraysize - 1] == 0)
	{
		ft_memmove(&a->array[s + 1], &a->array[s],
		(a->arraysize - s) * a->elesize);
		ft_memmove(&a->inuse[s + 1], &a->inuse[s], a->arraysize - s);
		a->array[s] = elem;
		return (0);
	}
	if (!(na = malloc(a->arraysize + 1)))
		return (1);
	if (!(newinuse = ft_strnew(a->arraysize)))
		return (1);
	ft_memcpy(na, a->array, a->arraysize);
	ft_memmove(&na[s + 1], &na[s], (a->arraysize - s) * a->elesize);
	a->arraysize += 1;
	ft_memcpy(newinuse, a->inuse, a->arraysize);
	ft_memmove(&newinuse[s + 1], &newinuse[s], a->arraysize - s - 1);
	free(a->array);
	free(a->inuse);
	a->array = na;
	a->inuse = newinuse;
	return (0);
}

int			ft_arrylstadd(long int spot, void *elem, t_arraylist *arrylst)
{
	if (spot < 0 || elem == NULL || arrylst == NULL)
		return (1);
	if (arrylst->arraysize < (size_t)spot)
	{
		if (increasespace(spot, elem, arrylst))
			return (1);
		return (0);
	}
	if (arrylst->inuse[spot] == 0)
	{
		arrylst->inuse[spot] = 1;
		arrylst->array[spot] = elem;
		return (0);
	}
	if (arrylst->inuse[spot] == 1)
	{
		if (shiftdown(spot, elem, arrylst))
			return (1);
		return (0);
	}
	return (1);
}
