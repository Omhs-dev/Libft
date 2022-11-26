#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *dst;
    int len;
    size_t i;
    size_t j;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    dst = (char *)malloc(sizeof(*s1) + len);
    if (!dst)
        return (NULL);
    i = 0;
    while (*s1)
    {
        dst[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        dst[i + j] = s2[j];
        j++;
    }
    dst[j] = 0;
    return (dst);
}