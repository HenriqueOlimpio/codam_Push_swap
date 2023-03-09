/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 16:54:05 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 12:44:35 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/* The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to the
     allocated memory.  The allocated memory is filled with bytes of value
     zero.**/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	size_mem;
	void	*new_mem;

	size_mem = count * size;
	new_mem = malloc(size * count);
	if (new_mem == NULL)
		return (NULL);
	else
		ft_bzero(new_mem, size_mem);
	return (new_mem);
}
