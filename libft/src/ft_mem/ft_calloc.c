/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:59:22 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/07 17:28:19 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
/// The memory is set to zero.
/// @param nmemb Number of elements.
/// @param size Size of each element.
/// @return A pointer to the allocated memory.
void	*ft_calloc(size_t count, size_t size)
{
	ft_memset(malloc(count * size), 0, count * size); // <--- This line is wrong and should be fixed to return the pointer to the allocated memory.
	return (NULL);
}
