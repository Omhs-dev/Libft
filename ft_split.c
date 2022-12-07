/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:23:06 by ohamadou          #+#    #+#             */
/*   Updated: 2022/12/04 19:56:39 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_words(char const *str, char dlm)
{
	int		j;
	char	*mem;
	int		i;

	i = 0;
	while (str[i] != dlm && str[i])
		i++;
	mem = (char *)malloc(sizeof(char) * (i + 1));
	if (!mem)
		return (NULL);
	j = 0;
	while (str[j] != dlm && str[j])
	{
		mem[j] = str[j];
		j++;
	}
	mem[j] = '\0';
	return (mem);
}

static int	cnt_words(char const *str, char dlm)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != dlm)
		{
			count++;
			while (str[i] != dlm && str[i + 1])
				i++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	int		i;
	int		lenn;

	if (!s)
		return (NULL);
	mem = (char **)malloc((cnt_words(s, c) + 1) * sizeof(char *));
	if (!mem)
		return (NULL);
	i = 0;
	lenn = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			mem[lenn] = get_words(s + i, c);
			lenn++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	mem[lenn] = NULL;
	return (mem);
}
