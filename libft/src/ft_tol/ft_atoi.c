/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:49:48 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/17 14:06:45 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Converts the initial portion of the string pointed to by str to int
/// representation.
/// @param str The string to convert.
/// @return The converted int.
int	ft_atoi(const char *str)
{
	int nbr;
	int neg;

	nbr = 0;
	neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9' && *str != 0)
	{
		nbr = nbr * 10 + *str - 48;
		str++;
	}
	return (nbr * neg);
}
