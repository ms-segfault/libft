#include "libft.h"

static int count_words(const char *s, char c) 
{

    int count = 0;
    int in_word = 0;
    
    while (*s)
    {
        if (*s != c && !in_word)
        {

            in_word = 1;
            count++;
        } 
        else if (*s == c) 
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}

static char *copy_word(const char *start, int len) 
{
    char *word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word) return NULL;
        strncpy(word, start, len);
    word[len] = '\0';
        return word;
}

char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int word_len;

    i=0;
    j=0;
    word_len = 0;

    int words = count_words(s, c);
    result = (char **)malloc(sizeof(char *) * (words + 1));
    if (result == NULL)
        return NULL;
    
    while (s[i] != '\0') 
    {
        if (s[i] != c) 
        {
            word_len = 0;
            const char *start = &s[i];
            while (s[i] != c && s[i] != '\0') 
            {
                word_len++;
                i++;
            }
            result[j] = copy_word(start, word_len);
            if (result[j] == NULL) 
            {
                // Free previously allocated memory
                while (j > 0) 
                {
                    free(result[--j]);
                }
                free(result);
                return NULL;
            }
            j++;
        } 
        else 
        {
            i++;
        }
    }
    result[j] = NULL;

    return result;
}

// int main()
// {
//     char *s = "Hel    lo World!";
//     char c = ' ';
//     char **result = ft_split(s, c);
//     int i = 0;

//     if (result) 
//     {
//         while (result[i] != NULL) 
//         {
//             printf("result[%d] = %s\n", i, result[i]);
//             free(result[i]);
//             i++;
//         }
//         free(result);
//     } 
//     else 
//     {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }
