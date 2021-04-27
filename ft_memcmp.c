#include "libft.h"

int ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
    unsigned char *str1 = (unsigned char*)arr1;
    unsigned char *str2 = (unsigned char*)arr2;
    size_t i = 0;

    if ((!arr1 && !arr2) || !n)
        return (0);
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] > str2[i])
                return (str1[i] - str2[i]);
            if (str2[i] > str1[i])
                return (str1[i] - str2[i]);
        }
        i++;
    }
    return (0);
}