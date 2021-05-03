#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;

    if (fd == -1)
        return (0);
    if (n == -2147483647 -1)
        write(fd, "-2147483648", 11);
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
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
