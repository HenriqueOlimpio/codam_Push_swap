/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 10:36:26 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/30 18:29:31 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
void printStack(t_stack *head) 
{
	while (head != NULL)
	{
		printf("nbr: %ld, index: %ld\n", head->nbr, head->index);
		head = head->next;
	}
}

int main(int argc, char **argv)
{
	t_stack *a;
	a = ft_start_list(argc, argv);

	// Check for duplicate values
	if (!a || check_dup(a))
	{
		ft_free(&a);
		ft_error();
	}

	// Check if the list is sorted
	if (!if_is_sorted(a))
		ft_free(&a);

	// Print the values of the nodes in the list
	printStack(a);

	ft_free(&a);

	return (0);
}

