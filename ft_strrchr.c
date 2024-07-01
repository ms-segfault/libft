#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    
    while (i >= 0)
    {
        if (s[i] == 0)
            return (0);
        if (s[i] == c)
            return ((char *)(s + i));
        i--;
    }
    return (0);
}

// int main() 
// {
//     const char *str = "Hello, world!";
//     char search_char = 'o';
//     char *result = ft_strrchr(str, search_char);

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", search_char, result - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", search_char);
//     }

//     return 0;
// }
