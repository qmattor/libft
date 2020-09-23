/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrylstdel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 23:37:53 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/21 23:41:04 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_arrylstdel(t_arraylist *lst, long int spot)
{
	free(lst->array[spot]);
	lst->inuse[spot] = 0;
	return (0);
}
