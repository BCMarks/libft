/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:22:55 by bmarks            #+#    #+#             */
/*   Updated: 2019/06/03 15:41:56 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strc(char const *s, char c)
{
	int		i;
	int		count;

	i = (int)ft_strspn(s, &c);
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) != c && *(s + i))
		{
			count++;
			i += (int)ft_strcspn(s + i, &c);
		}
		else
			i += (int)ft_strspn(s + i, &c);
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		i[3];

	if (!s || !(fresh = (char **)malloc(sizeof(char *) * (ft_strc(s, c) + 1))))
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (*(s + i[0]) != '\0')
	{
		i[0] += ft_strspn(s + i[0], &c);
		if (*(s + i[0]) != c && *(s + i[0]))
		{
			if (!(fresh[i[1]] = (char *)malloc(ft_strcspn(s + i[0], &c) + 1)))
				return (NULL);
			while (*(s + i[0]) != c && *(s + i[0]) != '\0')
				fresh[i[1]][i[2]++] = (char)*(s + i[0]++);
			fresh[i[1]][i[2]] = '\0';
			i[2] = 0;
			i[1]++;
		}
	}
	fresh[i[1]] = NULL;
	return (fresh);
}
