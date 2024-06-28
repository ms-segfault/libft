#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    while (n--)
    {
        if (*ptr == (unsigned char)c)
            return ptr;
            ptr++;
    }
    return NULL;
}

// int main() {
//     const char arr[] = "Hello, world!";
//     char search_char = 'o';
//     size_t n = 10;  // Search in the first 10 bytes
//     char *result = ft_memchr(arr, search_char, n);

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", search_char, result - arr);
//     } else {
//         printf("Character '%c' not found in the first %zu bytes.\n", search_char, n);
//     }

//     return 0;
// }
