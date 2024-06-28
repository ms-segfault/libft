#include "libft.h"

int ft_isdigit(int c)
{
    return (c >= '0' && c<= '9');
}

// int main() {
//     char test1 = '0';
//     char test2 = '5';
//     char test3 = 'a';

//     printf("ft_isdigit(%c) = %d\n", test1, ft_isdigit(test1));
//     printf("ft_isdigit(%c) = %d\n", test2, ft_isdigit(test2));
//     printf("ft_isdigit(%c) = %d\n", test3, ft_isdigit(test3));

//     return 0;
// }
