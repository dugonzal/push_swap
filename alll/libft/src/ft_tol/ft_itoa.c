/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:50:56 by ciclo             #+#    #+#             */
/*   Updated: 2022/09/12 01:52:45 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates (with malloc(3)) and returns a string representing the
/// integer received as an argument. Negative numbers must be handled.
/// @param n The integer to be converted to a string.
/// @return The string representing the integer. NULL if the allocation fails.
static void	ft_isneg(int *n, int *neg, int *tmp)
{
	if (*n == -2147483648)
	{
		*n = *n + 1;
		*neg = -1;
		*tmp = 1;
		*n = *n * -1;
	}
	else if (*n < 0)
	{
		*neg = -1;
		*n = *n * -1;
		*tmp = 0;
	}
	else if (*n >= 0)
	{
		*neg = 1;
		*tmp = 0;
	}
}

static int	ft_itoa_len(int n)
{
	int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static void	ft_itoa_write(char *str, int len, int n, int tmp)
{
	while (n > 9)
	{
		str[len--] = (n % 10) + '0' + tmp;
		n = n / 10;
		tmp = 0;
	}
	str[len] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;
	int		tmp;

	ft_isneg(&n, &neg, &tmp);
	len = ft_itoa_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1 + neg));
	if (!str)
		return (NULL);
	if (neg == -1)
		str[0] = '-';
	str[len + neg] = '\0';
	ft_itoa_write(str, len + neg - 1, n, tmp);
	return (str);
}
