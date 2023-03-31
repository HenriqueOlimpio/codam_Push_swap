/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_new_stack.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 16:41:15 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/30 14:09:44 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"

t_stack	*ft_new_stack(int content)
{
	t_stack	*new;
	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->nbr = content;
	new->next = NULL;
	return (new);
}
