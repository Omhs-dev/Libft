/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:23:06 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/29 01:12:39 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int char_delimeter(char c, char dlm)
{
	if (c == dlm || c == ' ' || c == '\n' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

/*
	those comments are valid
*/
// static int ft_isdelimiter(char c, char delimiter)
// {
// 	if  (c == delimiter)
// 		return (1);
// 	return (0);
// }

static int	count_word(const char *c, char dlm)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (c[i] != '\0')
	{
		if (!char_delimeter(c[i], dlm)
			&& (char_delimeter(c[i + 1], dlm) || !(c[i + 1])))
			count++;
		i++;
	}
	return (count);
}

static char *get_words(char const *string, char c)
{
	char *dst;
	int word; //content of dst

	word = 0;
	while (string[word] && string[word] != c)
		word++;
	//memorie for each word
	dst = (char *)malloc(sizeof(char) * word + 1);
	if (!dst)
		return (NULL);
	word = 0;
	while (string[word] && string[word] != c)
	{
		dst[word] = string[word];
		word++;
	}
	dst[word] = 0;
	return (dst);
}

char **ft_split(char const *s, char c) //c delimiter
{
	char **array_str;
	int i;

	array_str = malloc(sizeof(char *) * (count_word(s, c) + 1));
	i = 0;
	if (s[i])
	{
		//1. create word and assign to the elemnt 0 of the array
		array_str[i++] = get_words(s, c);
		//2. move pointer to the next word
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	array_str[i] = 0;
	return (array_str);
}

