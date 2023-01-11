/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:19:52 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/01/10 18:31:09 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <./libft.h>

size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;

	i = 0;
	while (i < destsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
