#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    char *str;
    char a;

    while (s[i])
    {
        if(!f(i, &s[i]))
            return (NULL);
        else
        {
            a = f(i, &s[i]);
            if (!(str = (char*)malloc(sizeof(char) * (a + 1))))
                return (NULL);
            return (str);
        }
        i++;
    }
}
