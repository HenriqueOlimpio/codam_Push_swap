/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 11:38:54 by henolimp      #+#    #+#                 */
/*   Updated: 2022/11/17 10:18:13 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.**/
#include "libft.h"

/*
 * ft_count counts how many strings (divided by delimiter) are in the
 * input string
 */
static int	ft_count(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			word++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (word);
}

static int	ft_free(char **new, int word)
{
	if (!new[word])
	{
		while (word >= 0)
		{
			free(new[word]);
			word--;
		}
		free(new);
		return (1);
	}
	return (0);
}

/*
 * arrays run through the input string, check the size of the "words" using the
 * delimiter, and create substrings from the original input string, starting at
 * the "start" index, and of size "len".
 */
static char	**arrays(char const *s, char c, char **new)
{
	unsigned int	start;
	int				word;
	size_t			len;
	int				i;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			len = (size_t)(i - start);
			new[word] = ft_substr(s, start, len);
			if (ft_free(new, word) == 1)
				return (NULL);
			word++;
		}
		new[word] = NULL;
	}
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;

	i = 0;
	new = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!new)
		return (NULL);
	if (s[i] == '\0')
	{
		new[0] = NULL;
		return (new);
	}
	return (arrays(s, c, new));
}
