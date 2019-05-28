/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:38:36 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/28 09:38:43 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src;

	i = 0;
	dst = s1;
	src = (char *)s2;
	while (i < n)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	return (s1);
}
