/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 17:09:50 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/08 17:43:04 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "inc/push_swap.h"

int	ft_find_av_size(char **argv)
{
	int		i;

	i = 0;
	if (!argv)
		return (0);
	while(argv[i])
		i++;
	return(i);
}

void	ft_check_repeat(int *stack, int size)
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

/*int	ft_atoi_mod(char *str, int *stack)
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
}*/
int	ft_ps_atoi(char *c, int *stack)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			ft_error(stack);
		nb = (nb * 10) + (c[i] - 48);
		i++;
	}
	if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
		ft_error(stack);
	return (nb * sign);
}

int ft_check_sorted(int *a, int size, int type)
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
