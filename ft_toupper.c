#include "libft.h"

int ft_toupper(int c)
{  
    if (c <= 'z' && c >= 'a')
        return (c - 32);
    return c;
}

// int main() 
// {
//     char ch = 'a';
//     char converted_ch = toupper(ch);

//     printf("Original character: %c\n", ch);
//     printf("Uppercase character: %c\n", converted_ch);

//     return 0;
// }
