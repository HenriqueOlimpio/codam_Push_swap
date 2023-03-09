/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 11:42:16 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 12:57:39 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*Outputs the character ’c’ to the given file
descriptor.**/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
