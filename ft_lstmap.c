#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
			ft_lstclear(&res, del);
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
