/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 18:04:32 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/06 16:35:27 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	ft_strchr(const char *str, char c)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*copy_n(const char *s, int n)
{
	char	*res;
	int		i;

	res = malloc(n + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (++i < n)
		res[i] = s[i];
	res[n] = '\0';
	return (res);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

static char	*addmem(int len, char *s)
{
	int		i;
	char	*temp;

	temp = malloc(len + 42 + 1);
	if (!temp)
		return (free(s), NULL);
	i = -1;
	while (++i < len)
		temp[i] = s[i];
	temp[len] = '\0';
	free(s);
	return (temp);
}

char	*read_line(int fd, char *stach)
{
	int	len;
	int	bites_readed;

	bites_readed = 1;
	while (ft_strchr(stach, '\n') < 0 && bites_readed > 0)
	{
		len = ft_strlen(stach);
		stach = addmem(len, stach);
		if (!stach)
			return (NULL);
		bites_readed = read(fd, stach + len, 42);
		if (bites_readed < 0)
			return (free(stach), NULL);
		stach[len + bites_readed] = '\0';
	}
	return (stach);
}
