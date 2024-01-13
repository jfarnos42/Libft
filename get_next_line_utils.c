/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:46:41 by jfarnos-          #+#    #+#             */
/*   Updated: 2024/01/13 16:58:09 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*dst;

	if (!s1)
		return (0);
	if (!s2)
	{
		return (s1);
	}
	dst = malloc(sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!dst)
		return (0);
	ft_memcpy_gnl(dst, s1, ft_strlen_gnl(s1));
	ft_memcpy_gnl(dst + ft_strlen_gnl(s1), s2, ft_strlen_gnl(s2) + 1);
	free (s1);
	return (dst);
}

void	*ft_memcpy_gnl(void *dst, void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (s);
	while (s[i])
	{
		if (s[i] == (char )c)
			return (&s[i]);
		i++;
	}
	return (0);
}
