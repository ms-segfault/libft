#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s,0,n);
}


// int main() 
// {
//     char buffer[10];

//     ft_bzero(buffer, sizeof(buffer));

//     printf("Buffer after ft_bzero:\n");
//     for (int i = 0; i < sizeof(buffer); i++) 
//     {
//         printf("%d ", buffer[i]);
//     }
//     printf("\n");

//     return 0;
// }
