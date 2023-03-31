/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 17:23:21 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/30 17:23:32 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"

/* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void	ft_sa(t_stack **a, int j)
{
	t_stack *current;

	if (!*a || !((*a)->next))
		return ;
	current = *a;
	*a = (*a)->next;
	current->next = (*a)->next;
	(*a)->next = current;
}
/*sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	ft_sb(t_stack **b, int j)
{
	t_stack	*current;
	if (!*b || !((*b)->next))
		return ;
	current = *b;
	*b = (*b)->next;
	current->next = (*b)->next;
	(*b)->next =current;
			t_stack	*ddtmp;
	if (j == 0)
		write(1, "sb\n", 3);
}
//ss : sa and sb at the same time.
void	ft_ss(t_stack **a, t_stack **b, int j)
{
	t_stack *current;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
			return ;
	current = *a;
	*a = (*a)->next;
	current->next = (*a)->next;
	(*a)->next = current;
	*b =(*b) ->next;
	current->next = (*b)->next;
	(*b)->next = current;
	if (j == 0)
		write(1, "dd\n",3);
}
//pa (push a): Take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.

void	ft_pa(t_stack **a, int j)
{
	t_stack	*current;
	if(!*a || !((*a)->next))
		return ;
	current = *a;
	*a = (*a)->next;
	current->next = (*a)->next;
	(*a)->next = current;
	if (j == 0)
		write(1,"sa\n", 3);
}
//pb (push b): Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*current;
	if(!*a)
		return ;
	current = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = current;
	if (!*b || !((*b)->next))
		write(1, "pb\n", 3);
}
