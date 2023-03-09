/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:37:08 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 12:56:07 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.
**/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
