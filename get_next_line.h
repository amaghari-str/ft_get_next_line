/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:50:10 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/06 16:40:16 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NEXT_LINE_H
# define FT_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strchr(const char *str, char c);
int		ft_strlen(const char *s);
char	*copy_n(const char *s, int n);
char	*read_line(int fd, char *stach);
char	*get_next_line(int fd);

#endif
