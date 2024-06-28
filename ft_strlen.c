#include "libft.h"

int ft_strlen(const char *s)
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

// int main() 
// {
//     char test1[] = "Hello, World!";
//     char test2[] = "";
//     char test3[] = "42";

//     printf("ft_strlen(\"%s\") = %zu\n", test1, ft_strlen(test1));
//     printf("ft_strlen(\"%s\") = %zu\n", test2, ft_strlen(test2));
//     printf("ft_strlen(\"%s\") = %zu\n", test3, ft_strlen(test3));

//     return 0;
// }
