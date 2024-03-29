/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:26:33 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/16 19:54:53 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief    Calculates the length of the string s.
/// @param s The string to be measured.
/// @return  The length of the string s.
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
