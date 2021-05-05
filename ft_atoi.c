#include "libft.h"

static int	attoi(char *str)
{
	int	n;

	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	count;
	int	n;

	count = 1;
	n = 0;
	while (*str == ' ' || (*str >= 7 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count = -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		return (0);
	n = attoi((char *)str);
	if (n > 2147483647 && count == 1)
		return (-1);
	if (n > 2147483647 && count == -1)
		return (0);
	return (count * n);
}
