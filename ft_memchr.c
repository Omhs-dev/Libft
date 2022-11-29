/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:48:04 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/29 01:12:36 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (c == str[i])
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char str[] = "OmarHamadou";
// 	const char ch = 'm';
// 	char *ret;

// 	ret = ft_memchr(str, ch, ft_strlen(str));
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }
