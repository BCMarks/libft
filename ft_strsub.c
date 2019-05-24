/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:06:18 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/24 14:45:41 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = (char *)malloc(sizeof(char) * ((unsigned int)len + 1));
	ft_strncpy(sub, (s + start), len);
	*(sub + (unsigned int)len + 1) = '\0';
	if (!sub)
		return (NULL);
	return (sub);
}
