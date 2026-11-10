/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:50:18 by amaghari          #+#    #+#             */
/*   Updated: 2026/11/10 13:28:11 by amaghari         ###   ########.fr       */
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
