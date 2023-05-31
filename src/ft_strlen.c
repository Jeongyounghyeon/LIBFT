#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		res;

	res = 0;
	if (!s)
		return (0);
	while (*s)
	{
		res++;
		s++;
	}
	return (res);
}
