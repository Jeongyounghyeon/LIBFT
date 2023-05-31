#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	res;

	res = 0;
	res += write(fd, s, ft_strlen(s));
	if (res == -1)
		return (res);
	res += write(fd, "\n", 1);
	return (res);
}
