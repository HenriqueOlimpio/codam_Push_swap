/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   moves.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/24 14:37:57 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/03 16:05:50 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

//ra (rotate a): Shift up all elements of stack a by 1.
//The first element becomes the last one.
void	ft_ra(t_stack *stack, int j)
{
	int	tmp;
	int		i;
	if ((stack->size_a == 0) || stack->size_a == 1)
		return ;
	i = 0;
	tmp = stack->a[i];
	while (++i < stack->size_a)
	{
        //printf()
		stack->a[i - 1] = stack->a[i];
	}
	stack->a[i - 1] = tmp;
	if (j == 1)
		write(1, "ra\n", 3);
}
//rb (rotate b): Shift up all elements of stack b by 1.
//The first element becomes the last one.
void	ft_rb(t_stack *stack, int j)
{
	int		tmp;
	int		i;
	if ((stack->size_b == 0) || stack->size_b == 1)
		return ;
	i = 0;
	tmp = stack->b[i];
	while (++i <stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
	}
	stack->b[i - 1] = tmp;
	if (j == 1)
		write(1, "rb\n", 3);
}

//rb (rotate b): Shift up all ele
//rr : ra and rb at the same time.
void	ft_rr(t_stack *stack, int j) // TODO -> essa funcao nao esta sendo chamada, ver pq
{

	if ((stack->size_b == 0) || (stack->size_b == 1)
			|| (stack->size_a == 0) || (stack->size_a == 1))
		return ;
	ft_ra(stack, j);
	ft_rb(stack, j);
	if (j == 1)
		write(1, "rr\n", 3);
}
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
