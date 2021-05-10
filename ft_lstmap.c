#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*tmp;
	t_list	*new;

	if(!lst)
		return (NULL);
	while(lst)
	{
		tmp = lst->content;
		new = (t_list*)malloc(sizeof(t_list));
		if (!new)
			del(new);
		new->content = f(tmp);
		lst = lst->next;
	}
	return (NULL);
}
