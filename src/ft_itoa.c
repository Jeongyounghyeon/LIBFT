#include "libft.h"

static int	len_digit(long long num)
{
	int	res;

	res = 1;
	while (num / 10)
	{
		res++;
		num /= 10;
	}
	return (res);
}

static void	mk_str(long long num, char *res, size_t idx)
{
	while (num / 10)
	{
		res[idx] = (num % 10) + '0';
		idx--;
		num /= 10;
	}
	res[idx] = num + '0';
}

char	*ft_itoa(int n)
{
	char		*res;
	long long	num;
	int			isminus;
	int			len;

	isminus = 0;
	num = (long long)n;
	if (n < 0)
	{
		isminus = 1;
		num = -num;
	}
	len = len_digit(num);
	res = (char *)malloc((isminus + len + 1) * sizeof(char));
	if (res == 0)
		return (0);
	res[isminus + len] = 0;
	mk_str(num, res, (size_t)(isminus + len - 1));
	if (isminus)
		res[0] = '-';
	return (res);
}
