#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *sub;

    if(!s)
        return (NULL);
    i = 0;
    if (ft_strlen(s) < start)
    {
		sub = (char*)malloc(sizeof(char));
		sub[i] = '\0';
		return (sub);
	}
    if (ft_strlen(s) < len)
        len = ft_strlen(s);
    if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len && s[start])
        sub[i++] = s[start++];
    sub[i] = '\0';
    return (sub);
}
