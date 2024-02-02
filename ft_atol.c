/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:46:32 by jfarnos-          #+#    #+#             */
/*   Updated: 2024/02/02 04:35:39 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long ft_atol(const char *str)
{
    int sign;
    long result;

    sign = 1;
    result = 0;
    while (*str != '\0')
    {
        if ((*str == '-' || *str == '+' ) && sign == 1)
            sign = -1;
        else if (*str == '+' && sign == -1)
            sign = 1;
        else if (*str >= '0' && *str <= '9')
            result = result * 10 + (*str - '0');
        else
            break;
        str++;
    }
    return result * sign;
}
