#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c +32);
    return c;
}

// int main() {
//     char ch = 'A';
//     char converted_ch = tolower(ch);

//     printf("Original character: %c\n", ch);
//     printf("Uppercase character: %c\n", converted_ch);

//     return 0;
// }
