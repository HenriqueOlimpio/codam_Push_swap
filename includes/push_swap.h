#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	long		nbr;
	long		index;
	struct s_stack *next;
	struct s_stack *prev;
}	t_stack;
t_stack	*ft_lstlast(t_stack *lst);
void	ft_free(t_stack **stack);
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_new_stack(int content);
void	ft_error(void);
t_stack *input(char **argv);
t_stack *ft_start_list(int argc, char **argv);
int	if_is_sorted(t_stack *stack_a);
int	check_dup(t_stack *a);
#endif
