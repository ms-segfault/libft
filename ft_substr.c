#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    if (!s)
        return (NULL);
        if (ft_strlen(s) < start)
            return (ft_strdup(""));
        if (ft_strlen(s) < start + len )
            len = ft_strlen(s) - start;
            substr = (char *)malloc(len + 1);
            if (substr == NULL)
                return (NULL);
            i=0;
            while (i < len)
            {
                substr[i] = s[start + i];
                i++;
            }
            substr[i] = '\0';
            return(substr);
}

// int main()
// {
//     char *s = "Hello, World!";
//     char *substr1 = ft_substr(s, 7, 5);
//     char *substr2 = ft_substr(s, 7, 10);
//     char *substr3 = ft_substr(s, 7, 0);
//     char *substr4 = ft_substr(s, 7, 100);

//     printf("Substring 1: %s\n", substr1);
//     printf("Substring 2: %s\n", substr2);
//     printf("Substring 3: %s\n", substr3);
//     printf("Substring 4: %s\n", substr4);

//     free(substr1);
//     free(substr2);
//     free(substr3);
//     free(substr4);

//     return 0;
// }
