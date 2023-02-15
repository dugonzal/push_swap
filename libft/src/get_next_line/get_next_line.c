/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:11:17 by dugonzal          #+#    #+#             */
/*   Updated: 2022/12/25 12:52:32 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/get_next_line.h"

char	*ft_free(char *buffer)
{
	free (buffer);
	return (NULL);
}

static char	*ft_line(char *str)
{
	char	*tmp;
	int		i;

	i = 0;
	while (str[i] != 0 && str[i] != '\n')
		i++;
	tmp = (char *)malloc(sizeof (char) * (i + 2));
	i = 0;
	while (str[i] != 0 && str[i] != '\n')
	{
		tmp[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

static char	*ft_read(char *str, int fd)
{
	char	*buffer;
	ssize_t	rd;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	rd = BUFFER_SIZE;
	while (rd != 0 && (!ft_find(str, '\n')))
	{
		rd = read(fd, buffer, BUFFER_SIZE);
		if ((!rd && !str) || rd == -1)
			return (ft_free(buffer));
		buffer[rd] = '\0';
		str = ft_join(str, buffer);
	}
	free(buffer);
	return (str);
}

static char	*ft_sub_str(char *str)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (str[i] != 0 && str[i] != '\n')
		i++;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) - i));
	if (!tmp && *str > ++i)
		return (NULL);
	i++;
	j = 0;
	while (str[i] != 0)
		tmp[j++] = str[i++];
	tmp[j] = 0;
	free (str);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE < 1)
		return (NULL);
	str = ft_read(str, fd);
	if (!str)
		return (NULL);
	line = ft_line(str);
	str = ft_sub_str(str);
	return (line);
}
