/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:31:29 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/01/11 17:18:27 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	src_len;
	int	dst_len;
	
	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (destsize != 0)
	{
		
	}
	return (src_len + dst_len -1);
}