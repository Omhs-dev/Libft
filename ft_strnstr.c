/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:48:23 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/25 17:14:44 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] == haystack[i + j] && i + j < len)
        {
            if (!needle[j + 1])
            {
                return (haystack + i);
                j++;
            }
            i++;
        }
    }
    if (!(*needle) && !needle)
        return (haystack);
    return (NULL);
}

