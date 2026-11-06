/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:55:24 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/06 16:36:50 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stach;
	static int	len;
	char		*rest;
	char		*line;

	if (fd < 0)
		return (NULL);
	stach = read_line(fd, stach);
	if (!stach)
		return (NULL);
	if (!*stach)
		return (free(stach), stach = NULL, NULL);
	len = ft_strchr (stach, '\n');
	if (len < 0)
		len = ft_strlen(stach) - 1;
	line = copy_n(stach, len + 1);
	rest = NULL;
	if (line && stach[len + 1])
		rest = copy_n(stach + len + 1, ft_strlen(stach + len + 1));
	free(stach);
	stach = rest;
	return (line);
}
