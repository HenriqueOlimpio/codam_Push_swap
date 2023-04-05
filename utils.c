/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 17:09:50 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/04 15:10:35 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"

int	ft_size_argv(char **argv)
{
	int		i;

	i = 0;
	if (!argv)
		return (0);
	while(argv[i])
		i++;
	return(i);
}

void	check_dup(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	while(i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] == stack[j])
				ft_error(stack);
			j++;
		}
		i++;
	}
}

int	ft_atoi_mod(char *str, int *stack)
{
	int	nbr;
	int	i;
	int	mod;

	i = 0;
	nbr = 0;
	mod = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || (str[i] == '\v')
		|| str[i] == '\f' || str[i] == '\r')
			i++;
	if (str[i] == '-')
	{
		mod = -1;
		i++;
	}
	
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	if((mod * nbr) > INT_MAX || (mod * nbr) < INT_MIN)
	{
		ft_error(stack);
		write(1, "error\n", 6);
	}
	return (mod * nbr);
}

int	check_if_is_sorted(int *a, int size, int type)
{
	int	i;

	if (type == 0)
	{
		i = 1;
		while (i < size)
		{
			if(a [i - 1] > a [i])
				return (0);
			i++;
		}
		return (i);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if(a[i - 1] < a[i])
				return (0);
			i++;
		}
		return (1);
	}
}
void	ft_error(int *stack)
{
	free(stack);
	write(2,"Error\n",6);
	exit(1);
}
