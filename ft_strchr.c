#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
            s++;
    }
    if (c = '\0')
        return ((char *)s);
        return (NULL);
}

// int main() {
//     const char *str = "Hello, world!";
//     char search_char = 'o';
//     char *result = ft_strchr(str, search_char);

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", search_char, result - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", search_char);
//     }

//     return 0;
// }
