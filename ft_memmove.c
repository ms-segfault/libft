#include "libft.h"

void *ft_memmove(void *dest, const void*src, size_t len)
{
    const char *s = src;
    char *d = dest;
    if (s < d)
    {
        s += len;
        d += len;
        while (len--)
        {
            *--d = *--s;
        }
    }
    else
    {
        while (len--)
        {
            *d++ = *s++;
        }
    }
    return dest;
}

// int main() 
// {
//     char str[] = "Hello, World!";
//     char buffer[20];

//     ft_memmove(buffer, str, strlen(str) + 1); // +1 to include the null terminator

//     printf("Original string: %s\n", str);
//     printf("Copied string: %s\n", buffer);

//     return 0;
// }
