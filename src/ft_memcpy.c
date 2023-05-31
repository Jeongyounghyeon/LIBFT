#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*ptr;
	const unsigned char	*s;

	if (dst == 0 && src == 0)
		return (0);
	ptr = dst;
	s = src;
	while (n--)
		*ptr++ = *s++;
	return (dst);
}
