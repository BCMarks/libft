/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:06:18 by bmarks            #+#    #+#             */
/*   Updated: 2019/06/10 09:58:53 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s && (int)len >= 0)
	{
		if (!(sub = (char *)malloc(sizeof(char) * ((unsigned int)len + 1))))
			return (NULL);
		ft_strncpy(sub, (s + start), (unsigned int)len);
		*(sub + (unsigned int)len) = '\0';
		return (sub);
	}
	return (NULL);
}
