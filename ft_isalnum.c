#include "libft.h"

int ft_isalnum(int c)
{
    return (ft_isalnum(c) || ft_isdigit(c));
}

// int main() {
//     char test1 = 'A';
//     char test2 = '5';
//     char test3 = '#';

//     printf("ft_isalnum(%c) = %d\n", test1, ft_isalnum(test1));
//     printf("ft_isalnum(%c) = %d\n", test2, ft_isalnum(test2));
//     printf("ft_isalnum(%c) = %d\n", test3, ft_isalnum(test3));

//     return 0;
// }
