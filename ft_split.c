#include "libft.h"

char **ft_split(char const *s, char c)
{
    size_t i = 0; char **t; size_t j = 0; size_t k = 0; size_t l = 0;

    while (s[i])
    {
        if (s[i] != c)
        {  
            j++;
            while (s[i] != c && s[i])
                i++;
        }
        i++;
    }
    i = 0;
    t = malloc(sizeof(char*) * (j + 1));
    t[j] = NULL;  
    while (k <= j && s[i++])
    {
        while (s[i++] != c && s[i])
            l++;
        t[k] = malloc(sizeof(char) * (l + 1));
        l = 0;
        k++;
    }
    k = 0;
    i = 0;
    while(k < j)
    {
        while (s[i++] != c && s[i])
        {
            t[k][l] = s[i];
            l++;
        }
        t[k][l] = '\0';
        l = 0;
        k++;
    }
    return (t);
}
