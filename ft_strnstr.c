#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t little_len = ft_strlen(little); 
    if (little_len == 0)
        return (char *)big;
    while (big[i] != '\0' && i < len)
    {
        if (big[i] == little[j])
        {
            while (big[i + j] == little[j] && little[j] != '\0' && i + j < len)
            {
                j++;
            }
            if (little[j] == '\0')
                return (char *)&big[i];
            j = 0;
        }
        i++;
    }
    return NULL;
}

// int main()
// {
//     const char *big = "Hello, World!";
//     const char *little1 = "World";
//     const char *little2 = "earth";
//     const char *little3 = "";

//     printf("Result 1: %s\n", ft_strnstr(big, little1, strlen(big)) ? "Found" : "Not found");
//     printf("Result 2: %s\n", ft_strnstr(big, little2, strlen(big)) ? "Found" : "Not found");
//     printf("Result 3: %s\n", ft_strnstr(big, little3, strlen(big)) ? "Found" : "Not found");

//     return 0;
// }
