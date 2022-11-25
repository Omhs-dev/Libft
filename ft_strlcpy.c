/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:15:07 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/21 21:29:39 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	int srclen;

	srclen = ft_strlen((char *)src);
	i = 0;
	while (src[i] && dstsize > 0 && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
// int main()
// {
// 	char *string;
// 	char buffer[19];
// 	int r;

// 	string = "Hello there, Venus";
// 	r = ft_strlcpy(buffer, string, 10);
// 	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
// 	return (0);
// }
