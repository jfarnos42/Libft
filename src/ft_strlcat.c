/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:31:29 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/01/12 15:38:29 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	n;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	n = dstsize - dst_len - 1;
	if (n > src_len)
		n = src_len;
	ft_memcpy(dst + dst_len, src, n);
	dst[dst_len + n] = '\0';
	return (dst_len + src_len);
}
