/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:49:48 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/20 09:31:38 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Converts the initial portion of the string pointed to by str to int
/// representation.
/// @param str The string to convert.
/// @return The converted int.
int	ft_atoi(const char *str)
{
	long int	nbr;
	int			neg;

	nbr = 0;
	neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
		nbr = nbr * 10 + *str++ - 48;
	if (nbr < -2147483648 || nbr > +2147483647)
	{
		printf ("Error\n");
		exit (1);
	}
	return ((int)nbr * neg);
}
