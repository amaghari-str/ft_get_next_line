/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:50:10 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/10 14:54:54 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#  if BUFFER_SIZE < 10
#  undef BBUFFER_SIZE
#  define BBUFFER_SIZE 10
# endif

int		ft_strchr(const char *str, char c);
int		ft_strlen(const char *s);
char	*copy_n(const char *s, int n);
char	*read_line(int fd, char *stach);
char	*get_next_line(int fd);

#endif
