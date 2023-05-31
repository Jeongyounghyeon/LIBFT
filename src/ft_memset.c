#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	size_t			i;

	bb = (unsigned char *)b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		bb[i++] = c;
	}
	return ((void *)b);
}
