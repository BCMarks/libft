/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:54:40 by event             #+#    #+#             */
/*   Updated: 2019/05/17 15:41:49 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int argu[5];
	int j;

	argu[0] = 'a';
	argu[1] = 'b';
	argu[2] = 'C';
	argu[3] = '+';
	argu[4] = 172;
	j = 0;
	ft_putstr("TIME TO TEST THE FT_IS... FUNCTIONS\n");
	while (j < 5)
	{
		ft_putnbr(ft_toupper(argu[j]));
		ft_putchar('\n');
		j++;
	}
	return (0);
}
