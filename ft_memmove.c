/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:52:38 by bmarks            #+#    #+#             */
/*   Updated: 2019/06/05 12:09:24 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src;
	char	*tmp;

	i = 0;
	dst = s1;
	src = (char *)s2;
	tmp = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	while (i < n)
	{
		*(tmp + i) = *(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(dst + i) = *(tmp + i);
		i++;
	}
	free(tmp);
	return (s1);
}
