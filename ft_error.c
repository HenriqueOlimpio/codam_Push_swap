/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_error.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 13:27:11 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/30 13:33:17 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include"includes/push_swap.h"

void	ft_error(void)
{
	write(2,"Error\n",6);
	exit(1);
}
