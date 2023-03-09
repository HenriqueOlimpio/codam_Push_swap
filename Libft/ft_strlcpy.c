/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:48:52 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/16 13:24:20 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*     strlcpy() copies up to dstsize - 1 characters from the string src to dst,
     NUL-terminating the result if dstsize is not 0.*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcl;
	size_t	i;

	srcl = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (size != '\0')
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcl);
}
