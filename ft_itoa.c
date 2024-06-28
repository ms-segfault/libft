#include "libft.h"

char *ft_itoa(int n)
{
    int len;
    int sign;
    int tmp;
    char *str;

    len = 1;
    sign = 0;
    tmp = -tmp;
    if (n < 0)
    {
        sign = 1;
        len++;
        tmp = -n;
    }
    while (tmp /= 10)
        len++;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
        str[len] = '\0';
        if (sign)
            str[0] = '-';
        while (len-- > sign)
        {
            str[len] = n % 10 + '0';
            n /= 10;
        }
        return (str);
}

int main()
{
    int n = -10;
    char *str = ft_itoa(n);
    printf("%s\n", str);
    free(str);
    return 0;
}
