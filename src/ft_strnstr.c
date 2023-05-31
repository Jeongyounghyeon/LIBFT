#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	size_t	i;
	size_t	size_needle;

	size_needle = ft_strlen(needle);
	if (!size_needle)
		return ((char *)haystack);
	i = 0;
	while ((haystack[i] != 0) && (i + size_needle <= len))
	{
		if (ft_strncmp(haystack + i, needle, size_needle) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
