#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return;
    write(fd, s, strlen(s));
    write(fd, "\n", 1);
}

// int main()
// {
//     ft_putendl_fd("Hello, world!", 1);
//     return 0;
// }
// // Output: Hello, world!