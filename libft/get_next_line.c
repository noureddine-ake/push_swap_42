/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:31:28 by nakebli           #+#    #+#             */
/*   Updated: 2023/03/12 14:19:37 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_save(int fd, char *line)
{
	char	*buff;
	int		i;

	line = NULL;
	buff = ft_calloc(2, sizeof(char));
	if (!buff)
		return (NULL);
	i = 1;
	while (i != 0 && !ft_strchr(line, '\n'))
	{
		i = read(fd, buff, 1);
		if (i == -1)
		{
			if (line)
				free (line);
			free(buff);
			return (NULL);
		}
		if (i == 0)
			break ;
		buff[i] = '\0';
		line = ft_strjoin(line, buff);
	}
	return (free(buff), line);
}

char	*get_next_line(int fd)
{
	static char	*line;

	if (fd < 0)
		return (NULL);
	line = read_save(fd, line);
	if (!line || !line[0])
		return (free(line), NULL);
	return (line);
}
