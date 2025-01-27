/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:46:06 by ssingjar          #+#    #+#             */
/*   Updated: 2024/09/26 00:36:32 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lethimcook(char **gimme, int pos, size_t size)
{
	int	i;

	i = 0;
	gimme[pos] = malloc(size);
	if (!gimme[pos])
	{
		while (i < pos)
		{
			free(gimme[i++]);
		}
		free(gimme);
		return (1);
	}
	return (0);
}

static int	fill(char **gimme, char const *s, char skip)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == skip && *s)
			s++;
		while (*s != skip && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (lethimcook(gimme, i, len + 1))
				return (1);
			ft_strlcpy(gimme[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

static size_t	how_many_word(char const *s, char skip)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		while (*s == skip && *s)
			++s;
		if (*s != skip && *s)
		{
			++n;
			while (*s != skip && *s)
				++s;
		}
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**gimme;

	if (!s)
		return (0);
	words = how_many_word(s, c);
	gimme = malloc((words + 1) * sizeof(char *));
	if (!gimme)
		return (0);
	gimme[words] = 0;
	if (fill(gimme, s, c))
	{
		free(gimme);
		return (0);
	}
	return (gimme);
}
