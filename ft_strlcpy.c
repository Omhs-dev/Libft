/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:15:07 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/15 22:27:39 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;

	if (dstsize > 0)
	{
		while (src[i] != '\0')
		if (i == dstsize)
		{
			i--;
			break;
		}
		
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
);
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
