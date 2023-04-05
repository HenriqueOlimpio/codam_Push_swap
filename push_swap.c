/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 10:36:26 by henolimp      #+#    #+#                 */
/*   Updated: 2023/04/04 15:24:39 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "includes/push_swap.h"

void	ft_push_swap(char **argv)
{
	t_stack stack;
	int		size;
	int		i;
	
	i = -1;
	size = ft_size_argv(argv);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
    while (++i < size)
		stack.a[i] = ft_atoi_mod(argv[i], stack.a);
	check_dup(stack.a, size);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}
char	*values_conc(char **argv)
{
	int	i;
	char *str;

	i = 0;
	str = ft_calloc(2, sizeof(char));
	while (argv[i])
	{
		if(ft_strncmp(argv[i], "", 2) == 0)
		{
			write(1,"Error\n", 6);
			exit(0);
		}
		str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv,' ');
		else
			argv = ft_split(values_conc(argv), ' ');
		ft_push_swap(argv);
	}
	return (0);
}

