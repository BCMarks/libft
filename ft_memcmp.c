/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:17:38 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/23 16:33:58 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				j;
	unsigned char	*z;
	unsigned char	*z2;

	j = 0;
	z = (unsigned char *)s1;
	z2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*(z + j) == *(z2 + j) && *(z + j) && *(z2 + j) && j < (int)n - 1)
		j++;
	return ((int)(*(z + j) - *(z2 + j)));
}
