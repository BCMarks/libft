/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 13:57:19 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/21 12:41:27 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	n = n - ft_strlen(s1) - 1;
	while (*(s1 + i))
		i++;
	while (*(s2 + j) && n > 0 )
	{
		*(s1 + i) = *(s2 + j);
		i++;
		j++;
		n--;
	}
	return (ft_strlen(s1) + ft_strlen(s2));
}
