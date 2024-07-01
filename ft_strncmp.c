#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while(n-- && *s1 && *s2)
    {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return 0;
}

// int main() {
//     const char *str1 = "Hello, world!";
//     const char *str2 = "Hello, everybody!";
//     size_t n = 7;  // Compare the first 7 characters
//     int result = ft_strncmp(str1, str2, n);

//     if (result < 0) {
//         printf("'%s' is less than '%s' in the first %zu characters\n", str1, str2, n);
//     } else if (result > 0) {
//         printf("'%s' is greater than '%s' in the first %zu characters\n", str1, str2, n);
//     } else {
//         printf("'%s' is equal to '%s' in the first %zu characters\n", str1, str2, n);
//     }
//     return 0;
// }
