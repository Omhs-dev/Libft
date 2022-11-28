/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:23:06 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/28 02:05:57 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r' || c == '\0')
		return (1);
	else
		return (0);
}

static int	count_word(char *c)
{
	int count;

	count = 0;
	int i;
	i = 0;
	while (c[i] != '\0')
	{
		if(!ft_isspace(c[i]) && ft_isspace(c[i + 1]))
			count++;
		i++;
	}
	return (count);
}

int main(void)
{
	char *as;

	as = "one two one";
	printf("%d", count_letter(as));
}

char **ft_split(char const *s, char c)
{
	int i;
	char *str;
	int lett_count;

	str = (char *)malloc(sizeof(char) * (count_word(s) + 1));
	lett_count = ft_strlen(str[i]);
	i = 0;
	while (str)
	{
		str[i] = (char *)malloc(sizeof(char) * lett_count);
		i++;
	}
	return (str);
}



