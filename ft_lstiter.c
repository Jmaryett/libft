#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while(lst->next)
	{
		tmp = lst->content;
		f(tmp);
		lst = lst->next; 
	}
}
