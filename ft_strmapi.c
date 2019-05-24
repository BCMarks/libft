/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:22:01 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/24 12:31:30 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (*(s + i))
	{
		*(fresh + i) = f(i, *(s + i));
		i++;
	}
	*(fresh + i) = '\0';
	return (fresh);
}
