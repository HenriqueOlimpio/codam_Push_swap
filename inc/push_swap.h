#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}	t_stack;

//moves
void	ft_sa(t_stack *stack, int j);
void	ft_sb(t_stack *stack, int j);
void	ft_ss(t_stack *stack, int j);
void	ft_pa(t_stack *stack, int j);
void	ft_pb(t_stack *stack, int j);
void	ft_ra(t_stack *stack, int j);
void	ft_rb(t_stack *stack, int j);
void	ft_rr(t_stack *stack, int j);
void	ft_rra(t_stack *stack, int j);
void	ft_rrb(t_stack *stack, int j);
void	ft_rrr(t_stack *stack, int j);
//utils
int	ft_find_av_size(char **argv);
void	ft_check_repeat(int *stack, int size);
int	ft_ps_atoi(char *str, int *stack);
int	ft_check_sorted(int *a, int size, int type);
void	ft_error(int *stack);
//sort
void	ft_sort_tmp(int	*stack, int size);
void	ft_sort(t_stack *stack, int size);
void	ft_sort_three_a(t_stack *s);
int	ft_push(t_stack *stack, int len, int operation);
//sort2
int	ft_quicksort_a(t_stack *stack, int len, int cnt);
int	ft_quicksort_b(t_stack *stack, int len, int cnt);
#endif
