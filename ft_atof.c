/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:58:38 by jfarnos-          #+#    #+#             */
/*   Updated: 2024/01/26 23:53:23 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	result;
	double	decimal;
	int		sign;

	result = 0.0;
	decimal = 0.1;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (*++str >= '0' && *str <= '9')
		result = result * 10.0 + (*str - '0');
	if (*str == '.')
	{
		++str;
		while (*str >= '0' && *str <= '9')
		{
			decimal *= 0.1;
			result += (*str - '0') * decimal;
			++str;
		}
	}
	return (result * sign);
}
