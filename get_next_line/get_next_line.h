/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:13:09 by cleone            #+#    #+#             */
/*   Updated: 2023/02/02 16:13:26 by cleone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_read_to_backup(int fd, char *backup);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *backup, char *buff);
size_t	ft_strlen(const char *s);
char	*ft_get_line(char *backup);
char	*ft_backup(char *backup);
#endif
