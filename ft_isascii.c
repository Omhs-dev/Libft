/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:03:04 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/15 19:34:29 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_isascii(int as)
{
    return (as >= 0 && as <= 0127);
}

// int main(void)
// {
//     int as;

//     as = '1';
//     if (ft_isascii(as))
//         write(1, "ascii", 5);
//     else
//         write(1, "not", 3);
// }
