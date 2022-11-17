/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:59:50 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/17 15:41:23 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		int i;
		i = 0;
		while (c && (i >= 65 && i <=90))
		{
			c = i;
			i++;
		}
	}
	return (c);
}

int main()
{
	char lower;
	lower = 'v';
	ft_toupper(lower);
	printf("%c", lower);
}
