#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if(!lst)
		return (NULL);
	while(lst->next)
	{
		tmp = lst->content;
		f(tmp);
		new = (t_list*)malloc(sizeof(t_list));
		if (!new)
			return NULL;
		new->content = tmp;
		lst = lst->next;
	}
}
