#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_lst;

	if (lst && del)
	{
		while (*lst)
		{
			current_lst = *lst;
			*lst = current_lst->next;
			del(current_lst->content);
			free(current_lst);
		}
	}
}
