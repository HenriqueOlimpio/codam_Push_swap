/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 13:15:51 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 13:18:16 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !(*s) || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
