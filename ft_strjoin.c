/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:54:34 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/24 15:06:57 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	fresh = (char *)malloc(sizeof(char) * len);
	ft_strcpy(fresh, s1);
	ft_strcat(fresh, s2);
	if (!fresh)
		return (NULL);
	return (fresh);
}
