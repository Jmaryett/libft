#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;

    if (n < 0)
    {
        ft_putchar_fd("-", fd);
        ft_putnbr_fd(-n, fd);
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
    {
        c = n + '0';
        ft_putchar_fd(c, fd);
    }
}
