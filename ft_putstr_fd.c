#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{

    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
    if (!s)
        return ;
}

int main () {
    char str1[15];
    char str2[15];

    ft_putstr_fd("one\n", 2);
    ft_putstr_fd("two\n", 1);
    return (0);
}