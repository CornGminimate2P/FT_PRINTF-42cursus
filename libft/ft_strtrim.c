/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <ssingjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:48:00 by ssingjar          #+#    #+#             */
/*   Updated: 2024/09/25 22:50:23 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_out(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*gim_me(char const *s, size_t first_pos, size_t last_pos)
{
	char	*me;
	size_t	i;

	i = 0;
	if (first_pos >= ft_strlen(s) || last_pos <= 0)
		return (ft_strdup(""));
	me = malloc((last_pos + 1) * sizeof(char));
	if (!me)
		return (NULL);
	while (i < last_pos)
	{
		me[i] = s[first_pos + i];
		i++;
	}
	me[i] = '\0';
	return (me);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	n;

	if (!s1)
		return (ft_strdup(""));
	i = 0;
	n = ft_strlen(s1) - 1;
	while (get_out(set, s1[i]))
		i++;
	while (get_out(set, s1[n]))
		n--;
	return (gim_me(s1, i, n - (i - 1)));
}
