/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bopok <bopok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:45:20 by bopok             #+#    #+#             */
/*   Updated: 2023/01/17 12:58:13 by bopok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoab(unsigned long n, char *dstr)
{
	char	*str;
	int		i;
	int		base;

	i = 0;
	base = ft_strlen(dstr);
	str = ft_strnew(24);	// max digits in an unsigned long long in octal is 23
	n == 0 ? str[0] = 48 : 0;
	if (n == 0)
		return (str);
	while (n > 0)
	{
		str[i++] = dstr[(n % base)];
		n /= base;
	}
	ft_strrev(str);
	return (str);
}
