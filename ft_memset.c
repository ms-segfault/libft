#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    while (n--)
    {
        ptr[n] = (unsigned char)c;
        // ptr++;
    }
    return s;
}

// int main() 
// {
//     char buffer[10];

//     ft_memset(buffer, 65, 10);

//     for (int i = 0; i < 10; i++) {
//         printf("%c ", buffer[i]);
//     }
//     printf("\n");

//     return 0;
// }
