/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:53:09 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/02 16:04:19 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

/* модифицированный strchr: возвращает ПОЗИЦИЮ символа, а не указатель; -1 если нет */
static int	ft_strchr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/* копирует первые n байт в новую память */
static char	*copy_n(const char *s, int n)
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

/* выделяет len + 42 байта, переносит старое содержимое, старое освобождает */
static char	*add_mem(char *s, int len)
{
	char	*res;
	int		i;

	res = malloc(len + 42 + 1);
	if (!res)
		return (free(s), NULL);
	i = -1;
	while (++i < len)
		res[i] = s[i];
	res[len] = '\0';
	free(s);
	return (res);
}

/* читаем, пока в stash нет '\n' */
static char	*fill(int fd, char *stash)
{
	int		len;
	ssize_t	r;

	r = 1;
	while (ft_strchr(stash, '\n') < 0 && r > 0)
	{
		len = ft_strlen(stash);
		stash = add_mem(stash, len);
		if (!stash)
			return (NULL);
		r = read(fd, stash + len, 42);
		if (r < 0)
			return (free(stash), NULL);
		stash[len + r] = '\0';
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	static int	nl;
	char		*line;
	char		*rest;

	if (fd < 0)
		return (NULL);
	stash = fill(fd, stash);
	if (!stash)
		return (NULL);
	if (!*stash)
		return (free(stash), stash = NULL, NULL);
	nl = ft_strchr(stash, '\n');
	if (nl < 0)
		nl = ft_strlen(stash) - 1;
	line = copy_n(stash, nl + 1);
	rest = NULL;
	if (line && stash[nl + 1])
		rest = copy_n(stash + nl + 1, ft_strlen(stash + nl + 1));
	free(stash);
	stash = rest;
	return (line);
}
