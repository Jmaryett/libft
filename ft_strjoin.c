#include "libft.h"

static char *ft_strcat(char *dest, char *src, char *res)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res; char *cat;

    if (!s1 && !s2)
        return (NULL);
    res = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!res)
        return (NULL);
    res = ft_strcat(s1, s2, res);
    return (res);
}

int main()
{
    char s1[] = "abc";
    char s2[] = "123";
    char *itog;
    itog = ft_strjoin(s1, s2);
    printf("%s", itog); 
}