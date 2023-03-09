/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 10:22:33 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 13:42:17 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//bzero -- write zeroes to a byte string
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
