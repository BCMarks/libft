/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:38:20 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/21 15:41:24 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (*(s1 + i))
	{
		while (*(s1 + i + k) == *(s2 + j))
		{
			j++;
			k++;
			if (!*(s2 + j))
				return ((char *)(s1 + i));
		}
		i++;
		j = 0;
		k = 0;
	}
	return (NULL);
}
