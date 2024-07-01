#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;
    int i;

    if (!s1 || !set)
        return NULL;
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
    {
        start++;
    }
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
    {
        end--;
    }
    str = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!str)
        return NULL;
    i = 0;
    while (start < end)
    {
        str[i] = s1[start];
        i++;
        start++;    
    }
    str[i] = '\0';
    return str;
}

// int main()
// {
//     char *s1 = " Hello, World! ";
//     char *set = NULL;
//     char *trimmed = ft_strtrim(s1, set);

//     if (trimmed)
//     {
//         printf("Trimmed string   :%s:\n", trimmed);
//         free(trimmed);
//     }
//     else
//     {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }
