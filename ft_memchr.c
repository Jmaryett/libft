#include "libft.h"

void    *ft_memchr(const void *arr, int c, size_t n)
{
    unsigned char *str = (unsigned char*)arr;
    size_t i = 0;

    if (!arr || !c || !n)
        return (NULL);
    while (i < n && str[i])
    {
        if (str[i] == (unsigned char)c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}
