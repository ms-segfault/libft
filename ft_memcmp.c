#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return 0;
}

// int main()
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     char str3[] = "Hello, World?";
    
//     int result;

//     // Comparing str1 and str2 (should be equal)
//     result = memcmp(str1, str2, sizeof(str1));
//     if (result == 0)
//         printf("str1 and str2 are equal\n");
//     else
//         printf("str1 and str2 are not equal\n");

//     // Comparing str1 and str3 (should be different)
//     result = memcmp(str1, str3, sizeof(str1));
//     if (result == 0)
//         printf("str1 and str3 are equal\n");
//     else
//         printf("str1 and str3 are not equal\n");

//     return 0;
// }