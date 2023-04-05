/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:23:21 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/03 16:11:19 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"

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
//pa (push a): Take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.

void	ft_pa(t_stack *stack, int j)
{
	int	i;

	if(stack->size_b)
	{
		stack->size_a++;
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->b[0] = stack->b[i + 1];
		if (j == 1)
				write(1, "pa\n",3);
	}
		else
			return ;
}
//pb (push b): Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
//void	ft_pb(t_stack *stack, int j)
//{
//	int	i;
//
//	if(stack->size_b)
//	{
//		stack->size_b++;
//		i = stack->size_b;
//		while (--i > 0)
//			stack->b[i] = stack->b[i - 1];
//		stack->b[0] = stack->a[0];
//		i = -1 ;
//		stack->size_a--;
//		while (++i < stack->size_a)
//			stack->a[i] = stack->a[i + 1];
//		if (j == 1)
//				write(1, "pb\n",3);
//	}
//		else
//			return ;
//}
void	ft_pb(t_stack *stack, int j)
{
    if (stack->size_a > 0)
    {
        stack->size_b++;
        stack->b[stack->size_b - 1] = stack->a[0];sss
        stack->size_a--;
        int i = 0;
        while (i < stack->size_a)
        {
            stack->a[i] = stack->a[i + 1];
            i++;
        }
        if (j == 1)
            write(1, "pb\n", 3);
    }
    else
        return ;
}

