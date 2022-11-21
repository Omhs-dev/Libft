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
	
	i = 0;
	while (str[i] >= '1' && str[i] <= '9')
		*str = *str - 48;
	return (0);
}

int	main()
{
	int val;
	char str[20];

	strcpy(str, "98993489");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	strcpy(str, "tutorialspoint.com");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	return (0);
}
