/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:29:42 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/21 19:38:37 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void
*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
