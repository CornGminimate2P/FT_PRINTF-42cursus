/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <ssingjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 01:30:46 by ssingjar          #+#    #+#             */
/*   Updated: 2024/09/25 22:49:59 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*k;
	int		i;
	int		n;

	i = 0;
	n = 0;
	k = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!k)
		return (NULL);
	while (s1[i])
	{
		k[n++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		k[n++] = s2[i++];
	}
	k[n] = '\0';
	return (k);
}
