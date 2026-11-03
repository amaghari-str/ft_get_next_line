/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:55:24 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/03 16:55:28 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strchr(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char *addmem(int len, char *s)
{
	int	i;
	char	*temp;

	i = 0;
	temp = malloc(len + 42 + 1);
	while (s[i])
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	free (s);
	return (temp);
}

char *read_line(int fd, char *stach)
{
	int	len;
	int	bites_readed;

	bites_readed = 1;
	while (ft_strchr(stach, '\n') < 0 && bites_readed > 0)
	{
		len = ft_strlen(stach);
		stach = addmem(len, stach);
		bites_readed = read(fd, stach, + len, 42);
		if (bites_readed < 0)
			return (free(stach), NULL);
		stach[len + bites_readed] = '\0';
	}
	return (stach);
}

char *get_next_line (int fd)
{
	static char	*stach;
	int	len;
	char	rest;
	char	line;

	if (fd < 0)
		return (NULL);
	if (!stach)
		stach = read_line(fd);
	
}
