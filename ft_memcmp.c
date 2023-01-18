/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:19:46 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/01/18 16:59:11 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1+ i != '\0' && s2 + i != '\0' && i < n)
	{
		i++;
	}
	return ((unsigned char *)(s1 + i) - (unsigned char *)(s2 + i));
}

int	main(void)
{
	char	mander[] = "Hola";
	char	izard[] = "Hola";
	printf("%d\n", memcmp(mander, izard, 3));
	printf("%d", ft_memcmp(mander, izard, 3));
	return(0);
}