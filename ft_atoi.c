/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:05:26 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/21 17:16:46 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;
	
	res = 0;
	sign = 1;
	i = 0;
	if ((str[i] && str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;	
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	main()
{
    char str[] = "er584526";
    char str1[] = "584526";
    int val = ft_atoi(str);
    int val1 = ft_atoi(str1);
    printf("%d\n", val);
    printf("%d\n", val1);
    return 0;
}
