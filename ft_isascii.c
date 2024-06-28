#include "libft.h"

int ft_isascii(int c)
{
    return (c >=0 && c<= 127);
}

// int main() 
// {
//     char test1 = 'A';
//     char test2 = 128;
//     char test3 = 0;

//     printf("ft_isascii(%c) = %d\n", test1, ft_isascii(test1));
//     printf("ft_isascii(%c) = %d\n", test2, ft_isascii(test2));
//     printf("ft_isascii(%c) = %d\n", test3, ft_isascii(test3));

//     return 0;
// }
