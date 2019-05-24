/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:10:24 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/24 16:11:39 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		i;
	int		len;
	int		start;
	int		end;

	i = 0;
	len = (int)ft_strlen(s);
	start = 0;
	end = 0;
	while (*(s + start) == ' ' || *(s + start) == '\n' || *(s + start) == '\t')
		start++;
	while ((*(s + len - end - 1) == ' ' || *(s + len - end - 1) == '\n'
			|| *(s + len - end - 1) == '\t') && len - end - 1 > start)
		end++;
	end = (int)ft_strlen(s) - end;
	fresh = (char *)malloc(sizeof(char) * (end - start));
	while (*(s + start) && start < end)
		*(fresh + i++) = *(s + start++);
	*(fresh + i) = '\0';
	if (!fresh)
		return (NULL);
	return (fresh);
}
