/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:34:54 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/21 19:13:42 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list	*next;

	next = *lst;
	while (next)
	{
		next = next->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	lst = NULL;
}
