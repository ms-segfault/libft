#include "libft.h"

void *ft_memcpy(void *dest,const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    while (n--)
    {
        *d++ = *s++;
    }
    return dest;
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dest[20];

//     /
//     ft_memcpy(dest, src, strlen(src) + 1); // +1 to include the null terminator

//     printf("Source string: %s\n", src);
//     printf("Copied string: %s\n", dest);

//     return 0;
// }
abcd str 
cd.. str + 2

abab