/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:21:04 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/29 01:19:19 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (len--)
	{
		if (c == s[len])
			return ((char *)s + len);
	}
	return (NULL);
}

// int main () {
//    const char str[] = "mamouth";
//    const char ch = 'm';
//    char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }
