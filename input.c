/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/30 14:05:31 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/30 18:31:52 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
void	ft_freestr(char **stack)
{
	char	*n1;

	if(!stack)
		return ;
	while (*stack)
	{
		n1 = *stack;
		stack++;
		free(n1);
	}
	*stack = NULL;
}
int	ft_atoi1(const char *str)
{
	long long int	nbr;
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
	if((mod * nbr) > 2147483647 || (mod * nbr) < -2147483648)
		write(1, "error\n", 6);
	return (mod * nbr);
}
t_stack *input(char **argv)
{
	t_stack *a;
	char	**tmp;
	int			i;
	int			j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while(tmp[i])
	{
		j = ft_atoi1(tmp[i]);
		ft_add_back(&a, ft_new_stack(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

t_stack *ft_start_list(int argc, char **argv)
{
	t_stack *a;
	int	i;
	int	j;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		a = input(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi1(argv[i]);
			ft_add_back(&a, ft_new_stack(j));
			i++;
		}
	}
	return (a);
}