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

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;

	if (dstsize > 0)
	{
		while (src[i] != '\0')
		{
		{
			dst[i] = src[i];
			i++;
		}
		}
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
int main()
{
	char *string;
	char buffer[19];
	int r;

	string = "Hello there, Venus";
	r = strlcpy(buffer, string, 8);
	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
	return (0);
}
