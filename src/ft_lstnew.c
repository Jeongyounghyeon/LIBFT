#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = (t_list *)malloc(1 * sizeof(t_list));
	if (new_lst == 0)
		return (0);
	new_lst->content = content;
	new_lst->next = 0;
	return (new_lst);
}
