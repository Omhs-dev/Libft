/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:10:30 by ohamadou          #+#    #+#             */
/*   Updated: 2022/11/29 01:14:21 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int ft_strlen(const char *str);
int ft_isalpha(char a);
int ft_isdigit(int d);
int ft_isalnum(int an);
int ft_isascii(int as);
int ft_isprint(char pr);
int ft_strncmp(const char *str1, const char *str2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
void *ft_calloc(size_t nmemb, size_t size);
void    ft_bzero(void *s, size_t n);
char *ft_strdup(const char *s);
int ft_atoi(const char *str);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *ptr, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
char	*ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
void	ft_putendl_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putnbr_fd(int n, int fd);

#endif