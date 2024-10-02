/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:34:24 by jfarnos-          #+#    #+#             */
/*   Updated: 2024/10/02 08:27:29 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_GNL(char *s1, char *s2)
{
	char	*dst;

	if (!s1)
		return (0);
	if (!s2)
	{
		return (s1);
	}
	dst = malloc(sizeof(char) * (ft_strlen_GNL(s1) + ft_strlen_GNL(s2) + 1));
	if (!dst)
		return (0);
	ft_memcpy_GNL(dst, s1, ft_strlen_GNL(s1));
	ft_memcpy_GNL(dst + ft_strlen_GNL(s1), s2, ft_strlen_GNL(s2) + 1);
	free (s1);
	return (dst);
}

void	*ft_memcpy_GNL(void *dst, void *src, size_t n)
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

int	ft_strlen_GNL(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr_GNL(char *s, int c)
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

void	ft_bzero_GNL(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
