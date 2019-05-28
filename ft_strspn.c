/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:36:42 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/28 14:06:46 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	int		brk;

	i = 0;
	j = 0;
	brk = 0;
	while (*(s1 + i))
	{
		while (*(s2 + j))
		{
			if (*(s1 + i) == *(s2 + j))
				brk = 1;
			j++;
		}
		if (brk)
			break ;
		i++;
	}
	if (!brk)
		return (0);
	i = 0;
	while (ft_strchr(s2, *(s1 + i)) != NULL && *(s1 + i))
		i++;
	return (i);
}
