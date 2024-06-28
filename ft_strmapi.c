#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
 
    if (!s || !f)
        return NULL;
    str = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    if (!str)
        return NULL;
    // Apliko funksionin f mbi çdo karakter të vargut s
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}

char my_toupper(unsigned int i, char c)
{
    (void)i; // This line is to avoid unused variable warning as 'i' is not used.
    return toupper(c);
}

int main()
{
    char *s = "Hello";
    char *str = ft_strmapi(s, my_toupper);
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }
    return 0;
}
