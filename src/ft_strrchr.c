#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ps;

	ps = s + ft_strlen(s);
	while (ps >= s)
	{
		if (*ps == (char)c)
			return ((char *)ps);
		ps--;
	}
	return (0);
}
