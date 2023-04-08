/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/08 15:19:50 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/08 15:40:03 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/push_swap.h"
//rra (reverse rotate a): Shift down all elements of stack a by 1.
//The last element becomes the first one.
void	ft_rra(t_stack *stack, int j)
{
	int	tmp;
	int		i;

	if ((stack->size_a == 0 || stack->size_a == 1))
		return;
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	if(j == 1)
		write(1,"rra\n", 4);
}

//rrb (reverse rotate b): Shift down all elements of stack b by 1.
//The last element becomes the first one.
void	ft_rrb(t_stack *stack, int j)
{
	int	tmp;
	int		i;

	if ((stack->size_b == 0 || stack->size_b == 1))
		return;
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = tmp;
	if(j == 1)
		write(1,"rrb\n", 4);
}
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
