/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 16:13:06 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/20 16:26:06 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *next;

	if (lst != NULL)
	{
		next = lst;
		while (1)
		{
			(*f)(next->content);
			next =next ->next;
			if (next == NULL)
				return ;
		}
	}
}
