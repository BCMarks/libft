/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 14:50:18 by event             #+#    #+#             */
/*   Updated: 2019/05/15 14:52:58 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isxdigit(int n)
{
	if (ft_isdigit(n) || (n >= 65 && n <= 70) || (n >= 97 && n <= 102))
		return (1);
	else
		return (0);
}