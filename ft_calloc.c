#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr = malloc(count * size);
    if (ptr == NULL)
        return NULL;
    ft_bzero(ptr, count *size);
    return ptr;
}

// int main()
// {
//     int *arr = ft_calloc(5, sizeof(int));

//      if (arr == NULL)
//     {
//         fprintf(stderr, "Memory allocation failed\n");
//         return 1;
//     }

//     for (int i = 0;i<5;i++)
//     {
//         printf("%d", arr[i]);
//     }
//       printf("\n");

//     // Free the allocated memory
//     free(arr);
//     return 0;
// }
