/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:46:45 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/24 12:15:45 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (*(s + i))
	{
		*(fresh + i) = f(*(s + i));
		i++;
	}
	*(fresh + i) = '\0';
	return (fresh);
}
