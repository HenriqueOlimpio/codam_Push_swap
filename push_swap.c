/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 10:36:26 by henolimp      #+#    #+#                 */
/*   Updated: 2023/03/09 10:40:31 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
int	ft_atoi(const char *str)
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
		ft_error();
//Do a specific value for the errors
	return (mod * nbr);
}
int main(int argc, char **argv)
{
	t_stack *a;

	a;

}

