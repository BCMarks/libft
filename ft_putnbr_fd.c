/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:38:55 by event             #+#    #+#             */
/*   Updated: 2019/05/15 15:51:19 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	char			digit;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	num = n;
	if (num >= 10)
		ft_putnbr_fd((num / 10), fd);
	digit = (num % 10) + '0';
	ft_putchar_fd(digit, fd);
}
