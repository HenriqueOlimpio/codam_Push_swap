/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 11:55:56 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 12:55:21 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*   The memmove() function copies len bytes from string src to string dst.
     The two strings may overlap; the copy is always done in a non-destructive
     manner.
**/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (len == 0)
		return (dst);
	if (dest > source)
		while (len-- > 0)
			dest[len] = source[len];
	else
		return (ft_memcpy(dest, source, len));
	return (dest);
}
