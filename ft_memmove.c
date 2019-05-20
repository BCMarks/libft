/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:52:38 by event             #+#    #+#             */
/*   Updated: 2019/05/20 15:49:44 by event            ###   ########.fr       */
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
	tmp = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (i < n)
	{
		*(tmp + i) = *(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(dst + i) = *(tmp + i);
		free(tmp + i);
		i++;
	}
	return (s1);
}
