#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = 0;
	tmp = (void *)malloc(count * size);
	if (tmp == 0)
		return (0);
	else
		ft_bzero(tmp, count * size);
	return (tmp);
}
