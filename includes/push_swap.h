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
void	ft_add_back(t_stack **stack, t_stack*stack_new);

#endif
