/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 01:32:14 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/29 01:32:14 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static void reverse_f(char *s)
{
	int i;
	int j;
	int c;

	j = ft_strlen(s) - 1;
	i = 0;
	while (j && i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}

static int int_count(int n)
{
	int i;
	
	i = 0;
	if(n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	int i;
	int sign;
	int len;
	
	// len = int_count(n);
	str = malloc(sizeof(char));
	if ((sign = n) < n)
		n = -n;
	i = 0;
	while ((n /= 10) > 0)
		str[i++] = n % 10 + '0';
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	reverse_f(str);
	return (str);
}

int main(void)
{
	printf("%s\n", ft_itoa(123156));
	return (0);
}
