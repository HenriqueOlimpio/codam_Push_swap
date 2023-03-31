/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_dup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 15:41:17 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/31 11:40:57 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	check_dup(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if(a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
