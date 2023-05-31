#include "libft.h"

static void	write_num(int n, int fd)
{
	if (n / 10)
		write_num(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		write_num(n * (-1), fd);
	}
	else
		write_num(n, fd);
}
