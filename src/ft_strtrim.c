#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(s1));
	end--;
	while ((s1[start]) && (ft_strchr(set, s1[start]) != 0))
		start++;
	while (ft_strchr(set, s1[end]) != 0)
	{
		end--;
		if (start > end)
			return (ft_strdup(""));
	}
	if (start <= end)
		return (ft_substr(s1, start, end - start + 1));
	else
		return (ft_strdup(""));
}
