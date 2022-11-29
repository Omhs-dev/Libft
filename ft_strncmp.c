/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:14:59 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/29 01:12:52 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	int	len1;
	int	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		return ((str1 + len1) - (str2 + len2));
			len1++;
			len2++;
			i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[15];
// 	char str2[15];
// 	int ret;

// 	strcpy(str1, "abcdef");
// 	strcpy(str2, "ABCDEF");
// 	ret = ft_strncmp(str1, str2, 4);
// 	if (ret < 0) {
// 		printf("str1 is less than str2");
// 	} else if(ret > 0) {
// 		printf("str2 is less than str1");
// 	} else {
// 		printf("str1 is equal to str2");
// 	}
// 	return (0);
// }
