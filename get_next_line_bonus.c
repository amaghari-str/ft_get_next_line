/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:29:07 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/10 14:46:41 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*stach[1024];
	int			len;
	char		*rest;
	char		*line;

	if (fd < 0 || fd >= 1024)
		return (NULL);
	stach[fd] = read_line(fd, stach[fd]);
	if (!stach[fd])
		return (NULL);
	if (!*stach[fd])
		return (free(stach[fd]), stach[fd] = NULL, NULL);
	len = ft_strchr (stach[fd], '\n');
	if (len < 0)
		len = ft_strlen(stach[fd]) - 1;
	line = copy_n(stach[fd], len + 1);
	rest = NULL;
	if (line && stach[fd][len + 1])
		rest = copy_n(stach[fd] + len + 1, ft_strlen(stach[fd] + len + 1));
	free(stach[fd]);
	stach[fd] = rest;
	return (line);
}
