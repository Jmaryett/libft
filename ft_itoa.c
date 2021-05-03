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

int	check_n(int n)
{
	if (n == -0)
		n = -n;
	if (n == -2147483648)
		n = 2147483648;
	if (n < 0)
		n = -n;
	return (n);
}

char *fill_array(char *str, int n, int sign)
{
	int i;

	i = 0;
	if (n == 0)
	{
    	str[i] = '0';
    	str[++i] = '\0';
		str = reverse(str);
		return (str);
	}
    while(n > 0)
    {
        str[i++] = n % 10 + '0';
        n = n / 10;
    }
	if (sign == -0)
		sign = -sign;
    if (sign < 0)
        str[i++] = '-';
    str[i] = '\0';
	str = reverse(str);
	return (str);
}

char *memory_alloc(int len, int n, int sign)
{
	char *str;

	if (sign <= 0)
	{
    	if (!(str = (char*)malloc(sizeof(char) * (len + 2))))
       		return (NULL);
	}
	else
	{
		if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
       		return (NULL);
	}
	str = fill_array(str, n, sign);
	return (str);
}

char *ft_itoa(int n)
{
    char *str;
    int sign;
    int len;

    sign = n;
	n = check_n(n);
    len = count(n);
	str = memory_alloc(len, n, sign);
    return (str);
}
