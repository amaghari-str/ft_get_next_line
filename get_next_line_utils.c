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
	int	i;
	size_t	j;

	i = 0;
}
