#include "libft.h"

int atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}   

// int main()
// {
//     // Test cases
//     const char *test1 = "42";
//     const char *test2 = "    -42";
//     const char *test3 = "4193 with words";
//     const char *test4 = "words and 987";
//     const char *test5 = "-91283472332";
//     const char *test6 = "+123";
//     const char *test7 = "  12345";
//     const char *test8 = "\t\n\r\v\f 6789";
//     const char *test9 = "0";
//     const char *test10 = "2147483647"; // Max int
//     const char *test11 = "-2147483648"; // Min int

//     printf("Test 1: %d\n", atoi(test1));       // Should print 42
//     printf("Test 2: %d\n", atoi(test2));       // Should print -42
//     printf("Test 3: %d\n", atoi(test3));       // Should print 4193
//     printf("Test 4: %d\n", atoi(test4));       // Should print 0
//     printf("Test 5: %d\n", atoi(test5));       // Should print -2147483648 (clamping)
//     printf("Test 6: %d\n", atoi(test6));       // Should print 123
//     printf("Test 7: %d\n", atoi(test7));       // Should print 12345
//     printf("Test 8: %d\n", atoi(test8));       // Should print 6789
//     printf("Test 9: %d\n", atoi(test9));       // Should print 0
//     printf("Test 10: %d\n", atoi(test10));     // Should print 2147483647
//     printf("Test 11: %d\n", atoi(test11));     // Should print -2147483648

//     return 0;
// }
