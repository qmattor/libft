/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 09:29:08 by qmattor           #+#    #+#             */
/*   Updated: 2019/12/09 10:22:42 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newinstance;
	void	*dest;

	dest = malloc(content_size);
	ft_memcpy(dest, content, content_size);
	newinstance = malloc(sizeof(t_list *));
	newinstance->content = dest;
	newinstance->content_size = content != NULL ? content_size : 0;
	return (newinstance);
}
