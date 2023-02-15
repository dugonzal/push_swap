/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:03:53 by dugonzal          #+#    #+#             */
/*   Updated: 2022/11/13 17:05:03 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t	ft_putnbr(int n)
{
	size_t	length;

	length = 0;
	if (n == -2147483648)
	{
		length += ft_putstr("-2147483648");
		return (length);
	}
	if (n < 0)
	{
		length += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		length += ft_putnbr(n / 10);
		length += ft_putnbr(n % 10);
	}
	else
		length += ft_putchar(n + '0');
	return (length);
}
