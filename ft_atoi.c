/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:42:44 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/22 13:11:44 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (*(s + i) && ft_isdigit(*(s + i)))
	{
		n = n * 10 + *(s + i) - '0';
		i++;
	}
	return (n);
}
