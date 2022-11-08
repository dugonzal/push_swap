/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:17:16 by ciclo             #+#    #+#             */
/*   Updated: 2022/09/12 01:19:06 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief  Allocates sufficient memory for a copy of the string s1, does the
/// copy, and returns a pointer to it.  The pointer may subsequently be used as
/// an argument to the function free(3).
/// @brief espacio suficiente para una copia de la cadena s1, hace la copia y
/// devuelve un puntero a ella. El puntero puede usarse posteriormente como
/// argumento de la función free(3).
/// @param s1 The string to be duplicated.
/// @return A pointer to the duplicated string.  It returns NULL if insufficient
/// memory was available.
char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		len;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len);
	if (!s2)
		return (0);
	ft_memmove(s2, s1, len);
	return (s2);
}
