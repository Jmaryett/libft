#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp->next)
	{
		del(tmp);
		free(tmp);
		tmp = tmp->next;
	}
	*lst = NULL;
}