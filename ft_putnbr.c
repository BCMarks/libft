/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:38:55 by event             #+#    #+#             */
/*   Updated: 2019/05/15 15:42:32 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	num;
	char			digit;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	num = n;
	if (num >= 10)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	ft_putchar(digit);
}
