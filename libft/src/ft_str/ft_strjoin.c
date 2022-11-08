/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:23:06 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/07 17:25:02 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates (with malloc(3)) and returns a new string, which is the
/// result of the concatenation of ’s1’ and ’s2’.
/// @param s1 The prefix string.
/// @param s2 The suffix string.
/// @return The new string. NULL if the allocation fails.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != 0)
		s3[j++] = s1[i++];
	i = 0;
	while (s2[i] != 0)
		s3[j++] = s2[i++];
	s3[i] = 0;
	return (s3);
}
