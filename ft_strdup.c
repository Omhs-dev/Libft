/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:56:32 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/25 15:56:32 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	n;
	char	*newsr;

	n = ft_strlen((char *)s);
	newsr = (char *)malloc((n + 1) * sizeof(char));
	if (!newsr)
		return (NULL);
	ft_strlcpy(newsr, s, n);
	return (newsr);
}

// int main()
// {
//     char source[] = "GeeksForGeeks";
//     char* target = ft_strdup(source);
//     printf("%s\n", target);
//     return 0;
// }