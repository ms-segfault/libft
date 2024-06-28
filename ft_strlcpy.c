#include "libft.h"

size_t strlcpy(char *dest, const char *src, size_t size)
{
    size_t i=0;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while (src[i] != '\0')
    {
        i++;
    }
    return i;
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dest[20];

//     size_t copied_len = strlcpy(dest, src, sizeof(dest));

//     printf("Source string: %s\n", src);
//     printf("Copied string: %s\n", dest);
//     printf("Length of copied string: %zu\n", copied_len);

//     return 0;
// }
