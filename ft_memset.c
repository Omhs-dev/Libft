/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:23:05 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/15 19:22:55 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  
#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{	
		*((unsigned char *)ptr + i) = c;
		i++;
	}
	return (ptr);
}
