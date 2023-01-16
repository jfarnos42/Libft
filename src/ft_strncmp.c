/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:31:16 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/01/12 16:03:46 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_strncmp(const char *s1, const char *s2. size_t n)
{ 
	size_t	i;
	unsigned char	*a;
	unsigned char	*b;

	*a = (unsigned char)s1;
	*b = (unsigned char)s2;
	i = 0;
	while ((a[i] || b[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (NULL);
}
