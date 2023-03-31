/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 15:41:30 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/21 19:36:16 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *n)
{
	if (lst && n)
	{
		n->next = *lst;
		*lst = n;
	}
}
