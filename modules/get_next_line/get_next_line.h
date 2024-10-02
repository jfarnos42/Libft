/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:41:21 by jfarnos-          #+#    #+#             */
/*   Updated: 2024/10/02 08:26:53 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE BUFSIZ
# endif

# if BUFFER_SIZE > 9223372036854775806L /*Double long*/
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen_GNL(char *str);
char	*get_next_line(int fd);
char	*ft_strjoin_GNL(char *s1, char *s2);
void	*ft_memcpy_GNL(void *dst, void *src, size_t n);
char	*ft_strchr_GNL(char *s, int c);
void	ft_bzero_GNL(void *s, size_t n);

#endif