/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:34:48 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/02/09 02:44:57 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "stdio.h"
// #include "ft_strlen.c"
// #include "ft_strdup.c"

static int	ft_spacecheck(int n)
{
	int	i;
	
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{	
	char	*str;
	int		i;
	
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (ft_spacecheck(n) + 1));
	if (!str)
		return (0);
	i = ft_spacecheck(n);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i++;
	}
	str[i--] = 0;
	while (n >= 10)
	{
		str[i] = n % 10 + '0';		
		n = n / 10;
		i--;
	}
	str[i] = n + '0';
	return (str);
}

// int main(void)
// {
// 	printf("%s", ft_itoa(-125));
// 	return (0);
// }