/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:17:42 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/24 09:24:12 by bmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;
	char	*ptmem;

	i = -1;
	mem = (void *)malloc(sizeof(void) * size);
	if (!mem)
		return (NULL);
	ptmem = mem;
	while (++i < size)
		*(ptmem + i) = '\0';
	return (mem);
}
