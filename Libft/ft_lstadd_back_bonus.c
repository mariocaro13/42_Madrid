#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_lst;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			current_lst = ft_lstlast(*lst);
			current_lst->next = new;
		}
	}
}
