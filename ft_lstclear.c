#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;

	while (*lst)
	{
		now = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = now;
	}
}
