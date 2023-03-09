/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 13:38:04 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 13:04:07 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*Outputs the string ’s’ to the given file
descriptor.**/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
