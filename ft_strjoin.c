#include "libft.h"  

char *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;
    int i;
    int j;
    int len1;
    int len2;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return NULL;
    len1 = strlen(s1);
    len2 = strlen(s2);
    s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (!s3)
        return NULL;
    while (s1[i])
    {
        s3[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        s3[i + j] = s2[j];
        j++;
    }
    s3[i + j] = '\0';
    return s3;
}

// int main()
// {
//     char *s1 = "Hello, ";
//     char *s2 = "world!";
//     char *result;

//     result = ft_strjoin(s1, s2);

//     if (result)
//     {
//         printf("The new string: %s\n", result);

//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }
