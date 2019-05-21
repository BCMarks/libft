/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:43:11 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/21 14:37:12 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (*(s + i))
	{
		if (*(s + i) == n)
			ptr = (char *)(s + i);
		i++;
	}
	if (n == '\n')
		ptr = (char *)(s + i);
	return (ptr);
}
