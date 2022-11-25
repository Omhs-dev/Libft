/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:44:31 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/15 22:33:13 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	int lendst;
	int lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen((char *)src);
	i = 0;
	j = lendst;
	while (src[i] && i < dstsize - lendst - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (dstsize < lendst)
		return (dstsize + lensrc);
	
	dst[j] = '\0';
	return (lendst + lensrc);
}

int main()
{
	char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 64;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}
