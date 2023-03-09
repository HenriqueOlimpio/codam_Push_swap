/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 16:45:31 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 12:53:16 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.
**/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
