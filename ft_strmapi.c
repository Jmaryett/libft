#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i = 0;
    char *str;
    size_t len;

    if (!s)
        return (NULL);
    len = ft_strlen(s);
    if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, (char)s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}
