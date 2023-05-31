#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*rmlst;
	t_list	*plst;

	plst = *lst;
	while (plst)
	{
		rmlst = plst;
		plst = plst->next;
		del(rmlst->content);
		free(rmlst);
	}
	*lst = 0;
}
