/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:15:07 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/17 14:52:17 by ohamadou         ###   ########.fr       */
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
