/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   if_is_sorted.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 14:40:16 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/30 14:44:54 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"

int	if_is_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->nbr;
	while (stack_a)
	{
		if (i > stack_a->nbr)
			return (0);
		i = stack_a->nbr;
		stack_a = stack_a->next;
	}
	return(1);
}
