/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:46:53 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/15 20:43:59 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *des ;
	char *sr;

	des = (char *)dst;
	sr = (char *)src;
	if (des > sr)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			des[i] = sr[i];
			i--;
		}
	}
	ft_memcpy(des, sr, len);
	return (dst);
}
