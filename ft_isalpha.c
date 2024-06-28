#include "libft.h"

int ft_isalpha(int c)
{
    return ((c >='a' && c <= 'z') || (c >='A' && c <= 'Z');)
}

// int main() {
//     char test1 = 'A';
//     char test2 = 'z';
//     char test3 = '1';

//     printf("ft_isalpha(%c) = %d\n", test1, ft_isalpha(test1));
//     printf("ft_isalpha(%c) = %d\n", test2, ft_isalpha(test2));
//     printf("ft_isalpha(%c) = %d\n", test3, ft_isalpha(test3));

//     return 0;
// }
