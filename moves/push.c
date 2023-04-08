/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:23:21 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/08 17:48:40 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/push_swap.h"

void	ft_pb(t_stack *stack, int sign)
{
	int	i;

	if (stack->size_a)
	{
		stack->size_b++;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		stack->size_a--;
		while (++i < stack->size_a)
			stack->a[i] = stack->a[i + 1];
		if (sign == 1)
			printf("pb\n");
	}
	else
	{
		return ;
	}
}

void	ft_pa(t_stack *stack, int sign)
{
	int	i;

	if (stack->size_b)
	{
		stack->size_a++;
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = -1;
		stack->size_b--;
		while (++i < stack->size_b)
			stack->b[i] = stack->b[i + 1];
		if (sign == 1)
			printf("pa\n");
	}
	else
	{
		return ;
	}
}


//pa (push a): Take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.



/*void	ft_pa(t_stack *stack, int j)
{
	int	i;

	if (stack->size_b)
	{
		stack->size_a++;
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = -1 ;
		stack->size_b--;
		while (++i < stack-> size_b)
			stack->b[i] = stack->b[i + 1];
		if (j == 1)
				write(1, "pa\n",3);
	}
		else
			return ;
}
//pb (push b): Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void	ft_pb(t_stack *stack, int j)
{
	int	i;

	if(stack->size_b)
	{
		stack->size_b++;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1 ;
		stack->size_a--;
		while (++i < stack->size_a)
			stack->a[i] = stack->a[i + 1];
		if (j == 1)
			write(1, "pb\n",3);
	}
		else
			return ;
}*/
