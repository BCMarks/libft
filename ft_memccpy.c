/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:36:38 by event             #+#    #+#             */
/*   Updated: 2019/05/20 14:14:08 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
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
		if (*(src + i) == c)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
