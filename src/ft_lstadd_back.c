#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastlst;

	lastlst = ft_lstlast(*lst);
	if (lastlst == 0)
	{
		*lst = new;
		return ;
	}
	lastlst->next = new;
}
