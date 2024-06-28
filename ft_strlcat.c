#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  dst_len;
    size_t  src_len;
    
    i = 0;
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (size == 0)
        return src_len;
    if (size <= dst_len)
        return src_len + size;
    while (dst[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return dst_len + src_len;
}

// int main() 
// {
//     char dest[20] = "Hello, ";
//     char src[] = "World!";
//     size_t dest_size = sizeof(dest);

//     size_t concatenated_len = ft_strlcat(dest, src, dest_size);

//     printf("Concatenated string: %s\n", dest);
//     printf("Length of concatenated string: %zu\n", concatenated_len);

//     return 0;
// }
