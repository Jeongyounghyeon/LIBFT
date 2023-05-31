#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i_dest;
	size_t	i_src;
	size_t	dstl;
	size_t	srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	i_dest = dstl;
	i_src = 0;
	while (src[i_src] && (i_src + dstl + 1) < dstsize)
	{
		dst[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dst[i_dest] = '\0';
	if (dstl < dstsize)
		return (srcl + dstl);
	else
		return (srcl + dstsize);
}
