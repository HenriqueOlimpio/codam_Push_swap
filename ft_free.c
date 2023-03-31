/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 13:32:52 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/30 16:03:33 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"

void	ft_free(t_stack **stack)
{
	t_stack *tmp;

	if (*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
