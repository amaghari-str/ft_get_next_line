/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:50:18 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/10 15:02:33 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#  if BUFFER_SIZE < 10
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strchr(const char *str, char c);
int		ft_strlen(const char *s);
char	*copy_n(const char *s, int n);
char	*read_line(int fd, char *stach);
char	*get_next_line(int fd);

#endif
