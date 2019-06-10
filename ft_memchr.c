/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:00:45 by bmarks            #+#    #+#             */
/*   Updated: 2019/06/07 17:23:37 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int n, size_t i)
{
	int				j;
	unsigned char	*z;

	j = 0;
	z = (unsigned char *)s;
	while (i > 0)
	{
		if (*(z + j) == (unsigned char)n)
			return ((unsigned char *)(s + j));
		j++;
		i--;
	}
	return (NULL);
}
