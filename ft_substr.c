/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:37:31 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/26 22:37:31 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	size_t lenn;
	size_t i;
	size_t n;

	if (!s)
		return (NULL);	
	lenn = ft_strlen((char *)s);
	if (lenn < len)
		n = lenn + 1;
	else
		n = len + 1;
	dest = malloc(sizeof(*s) * n);
	if (!dest)
		return (NULL);	
	i = 0;
	while (s[i + start] && ((i + start) < (len + start)))
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
//     char src[] = "substr function Implementation";
//     int m = 7;
//     int n = 12;
//     char* dest = ft_substr(src, m, n);
//     printf("%s\n", dest);
//     return 0;
// }