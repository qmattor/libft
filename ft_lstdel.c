/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:05:48 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/11 04:31:30 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (del)(void *, size_t))
{
	t_list *temp;

	if (*alst == NULL)
	{
		alst = NULL;
		return ;
	}
	temp = *alst;
	if (temp->next == NULL)
	{
		del(temp->content, temp->content_size);
		free(temp);
		alst = NULL;
		return ;
	}
	*alst = temp->next;
	del(temp->content, temp->content_size);
	if (temp->next != NULL)
		ft_lstdel(alst, del);
	*alst = NULL;
}
