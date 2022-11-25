#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    char *newsr;
    int n;

    n = ft_strlen((char *)s);
    newsr = (char *)malloc((n + 1) * sizeof(char));
    if (!newsr)
        return (NULL);
    ft_strlcpy(newsr, s, n);
    return (newsr);
}

// int main()
// {
//     char source[] = "GeeksForGeeks";
//     char* target = ft_strdup(source);
//     printf("%s\n", target);
//     return 0;
// }