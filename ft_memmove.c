/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:26 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/01/17 00:39:47 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while(len > i && ft_strlen(dst) < ft_strlen(src))
	{
		len--;
		((char *)dst)[len] = ((char *)src)[len];
	}
	while (i < len && ft_strlen(dst) >= ft_strlen(src))
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
