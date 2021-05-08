#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return (NULL);
	*lst = ft_lstlast(lst);
	new->next = *lst;
	*lst = new;
}
