/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:40:56 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/25 16:28:29 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isprint(char pr)
{
	if (pr >= 0 && pr <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int as;

// 	as = '#';
// 	if (ft_isprint(as))
// 		write(1, "print", 5);
// 	else
// 		write(1, "not", 3);
// }