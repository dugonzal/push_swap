/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:06:07 by ciclo             #+#    #+#             */
/*   Updated: 2022/10/24 12:57:05 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Writes len bytes of value c (converted to an unsigned char) to the
/// string b.
/// @param b The string to be written.
/// @param b el valor a escribir en la cadena.
/// @param c The character to be written.
/// @param c el caracter a escribir en la cadena.
/// @param len The number of bytes to be written.
/// @param len el numero de bytes a escribir.
/// @return A pointer to the memory area b.
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i++ < len)
		((unsigned char *)b)[i] = (unsigned char)c;
	return (b);
}
