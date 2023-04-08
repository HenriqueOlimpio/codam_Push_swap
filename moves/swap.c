/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 14:16:50 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/08 15:39:57 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/push_swap.h"
/* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void	ft_sa(t_stack *stack, int j)
{
	int	tmp;

	if ((stack->size_a == 0) || stack->size_a == 1)
		return ;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (j == 1)
		write(1, "sa\n", 3);
}
/*sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	ft_sb(t_stack *stack, int j)
{
	int tmp;

	if ((stack->size_b == 0) || stack->size_b == 1)
		return ;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (j == 1)
		write(1, "sb\n", 3);
}
//ss : sa and sb at the same time.
void	ft_ss(t_stack *stack, int j)
{
	if ((stack->size_a == 0) || (stack->size_a == 1) 
			|| (stack->size_b == 0) || (stack->size_b == 1))
	{
		return ;
	}
	ft_ra(stack, j);
	ft_sb(stack, j);
	if (j == 1)
		write(1, "ss\n",3);
}
