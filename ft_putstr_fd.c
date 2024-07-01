#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    write(fd, s, strlen(s));
}

// int main()
// {
//     ft_putstr_fd("Hello, world!\n", 1);
//     return 0;
// }
