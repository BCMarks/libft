/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:55:15 by bmarks            #+#    #+#             */
/*   Updated: 2019/05/30 13:28:41 by iisaacs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	rotup(char *s, int x)
{
	char	hol;

	if (ft_isupper(*s + x))
		hol = *s + x;
	else if (x > 0)
		hol = *s + x - 26;
	else
		hol = *s + x + 26;
	return (hol);
}

char	rotlow(char *s, int x)
{
	char	hol;

	if (ft_islower(*s + x))
		hol = *s + x;
	else if (x > 0)
		hol = *s + x - 26;
	else
		hol = *s + x + 26;
	return (hol);
}

void	ft_rotx(char *s, int x)
{
	char	hol;

	while (x > 25)
		x -= 26;
	while (x < -25)
		x += 26;
	while (*s && s)
	{
		hol = *s;
		if (ft_isupper(*s))
			hol = rotup(s, x);
		else if (ft_islower(*s))
			hol = rotlow(s, x);
		ft_putchar(hol);
		s++;
	}
}