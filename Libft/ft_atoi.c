/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:33:20 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 12:43:18 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*The atoi() function converts the initial portion of the string pointed toi
 by str to int representation.*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	n;

	i = 0;
	s = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || (str[i] == '\v')
		|| str[i] == '\f' || str[i] == '\r')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * s);
}
