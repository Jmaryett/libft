#include "libft.h"

void    *ft_memchr(const void *arr, int c, size_t n)
{
    unsigned char *str = (unsigned char*)arr;
    size_t i = 0;

	if ((char)c == '\0')
	{
		while (*str)
		{
			if (*str == '\0')
				return ((char*)str);
			str++;
		}
		return ((char*)str);
	}
    while (i < n && str[i])
    {
        if (str[i] == (unsigned char)c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}
