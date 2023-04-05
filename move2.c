/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move2.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 14:16:50 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/03 16:43:31 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"
void	ft_rrr(t_stack *stack, int j)
{
	if ((stack->size_b == 0) || (stack->size_b == 1)
		|| (stack->size_a == 0) || (stack->size_a == 1))
		return ;
	ft_rra(stack, j);
	ft_rrb(stack, j);
	if (j == 1)
		write(1,"rrr\n", 4);
}
