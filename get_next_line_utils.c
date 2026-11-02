/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 18:04:32 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/01 18:09:15 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	d;
	int		i;

	i = 0;
	d = (char)c;
	while (str[i])
	{
		if (str[i] == d)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == d)
		return ((char *)str + i);
	return (NULL);
}

int ft_strchar(char *stach, char cerecter, size_t from)
{
	int	i;
	i = from;
	if (!from)
		i = 0;
	while (stach[i] != cerecter)
		i++;
	if (!stach[i])
		return (0);
	return i;
}

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*p;

	p = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (p == NULL)
		return (NULL);
	ft_strcpy(p, src);
	return (p);
}

void go_read (char *stach, int fd)
{
	static int	i;
	static size_t	j;
	char	*p;

	i = 42;
	if (ft_strchar(stach, '\n'))
	{
		j = ft_strchar(stach, '\n', j);
	}
	else
	{
		p = memaloc((i *= 2));
	}
}
















