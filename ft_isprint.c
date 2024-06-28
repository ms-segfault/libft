#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c<= 126);
}

// int main() {
//     char test1 = 'A';
//     char test2 = '32';
//     char test3 = ';

//     printf("ft_isprint(%c) = %d\n", test1, ft_isprint(test1));
//     printf("ft_isprint(%c) = %d\n", test2, ft_isprint(test2));
//     printf("ft_isprint(%c) = %d\n", test3, ft_isprint(test3));

//     return 0;
// }
