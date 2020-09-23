/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 22:19:16 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/19 13:51:57 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_searchlst(t_list *lst, int fd)
{
	while (lst->next != NULL)
	{
		if (lst->content_size == (size_t)fd)
			return (lst);
		lst = lst->next;
	}
	if (lst->content_size == (size_t)fd)
		return (lst);
	return (NULL);
}
