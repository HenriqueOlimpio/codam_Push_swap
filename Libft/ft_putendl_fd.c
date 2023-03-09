/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 15:46:21 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 12:58:04 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*Outputs the string ’s’ to the given file descriptor
followed by a newline.**/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
