/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_appendlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 22:16:37 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/18 22:28:44 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_appendlst(t_list *lst, char *buf, int fd)
{
	if (lst->content_size == (size_t)fd)
	{
		lst->content = (void *)buf;
		return ;
	}
	if (lst->next == NULL)
		return ;
	ft_appendlst(lst->next, lst->content, lst->content_size);
}
