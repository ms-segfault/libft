#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -214783648)
    {
        ft_putstr_fd("-2147483648", fd);
        return;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + '0', fd);
    }
    else
        ft_putchar_fd(n + '0', fd);
}

// int main()
// {
//     ft_putnbr_fd(123, 1);
//     printf("\n");
//     return (0);
// }
// Output: 123