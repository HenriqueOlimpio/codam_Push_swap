/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 14:42:11 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/20 15:55:37 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*orig;

	new_lst = NULL;
	orig = lst;
	while (orig)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (new_node == 0)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_lst, new_node);
		orig = orig->next;
	}
	return(new_lst);
}
