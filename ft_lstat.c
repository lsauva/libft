#include "libft.h"

t_list	*ft_lstat(t_list *lst, size_t val)
{
	size_t i;

	i = 0;
	while (i < val && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
