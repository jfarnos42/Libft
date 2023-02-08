/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:32:10 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/02/08 22:24:59 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrdcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	ft_wrdlen(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	size_t	len;
	size_t	save;

	i = 0;
	if (s == NULL)
		return (NULL);
	list = malloc(sizeof(char *) * (ft_wrdcount(s, c) + 1));
	if (!list)
		return (0);
	save = 0;
	while (s[i])
	{
		len = ft_wrdlen((char *)&s[i], c);
		if (len != 0)
			list[save++] = ft_substr(&s[i], 0, len);
		if ( len == 0)
			i++;
		else
			i = i + len;
	}
	list[save] = NULL;
	return (list);
}