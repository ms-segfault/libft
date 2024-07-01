#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void my_toupper(unsigned int i, char *c)
{
    (void)i; // This line is to avoid unused variable warning as 'i' is not used.
    *c = ft_toupper(*c);
}

// int main()
// {
//     char s[] = "Hello";
//     ft_striteri(s, my_toupper);
//     printf("%s\n", s);
//     return 0;
// }
// // Output: HELLO
