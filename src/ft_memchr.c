#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	size_t			i;
	unsigned char	*s_tmp;

	s_tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_tmp[i] == (unsigned char)c)
			return (s_tmp + i);
		i++;
	}
	return (0);
}
