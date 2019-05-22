/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:09:26 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/22 11:37:56 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		i;

	i = 0;
	ns = (char *)malloc(ft_strlen(s) + 1);
	if (!ns)
	{
		printf("ah sjit fam malloc failed");
		return (NULL);
	}
	while (*(s + i))
	{
		*(ns + i) = *(s + i);
		i++;
	}
	*(ns + i) = '\0';
	return (ns);
}
