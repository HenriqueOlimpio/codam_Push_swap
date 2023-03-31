/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_add_back.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 14:14:10 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/25 17:29:39 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"
t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (0);
	while(lst ->next)
		lst = lst -> next;
	return (lst);
}
void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
		if (!*stack)
			*stack = stack_new;
		else
			(ft_lstlast(*stack))->next = stack_new;

}
