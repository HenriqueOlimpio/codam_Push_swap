/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 15:56:18 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/25 15:48:57 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmp = ft_lstlast(*lst);
			tmp -> next = new;
		}
	}
}
