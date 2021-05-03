#include "libft.h"

char *reverse(char *str)
{
    int i;
    int j;
    char c;

    i = 0;
    j = ft_strlen(str) - 1;
    while(i < j)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return (str);
}

int count(int n)
{
    int len;

    len = 0;
    while(n > 0)
    {
        len++;
        n = n / 10;
    }
    return (len);
}

char *ft_itoa(int n)
{
    char *str;
    int i;
    int sign;
    int len;

    i = 0;
    sign = n;
    if (n < 0)
        n = -n;
    len = count(n);
    if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while(n > 0)
    {
        str[i++] = n % 10 + '0';
        n = n / 10;
    }
    if (sign < 0)
        str[i++] = '-';
    str[i] = '\0';
    str = reverse(str);
    return (str);
}
