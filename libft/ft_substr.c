/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:17:01 by ssingjar          #+#    #+#             */
/*   Updated: 2024/09/26 17:43:43 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	subsize;
	size_t	strlen;
	char	*k;

	if (!s)
		return (NULL);
	i = 0;
	strlen = ft_strlen(s);
	if (start >= strlen || len == 0)
		return (ft_strdup(""));
	subsize = ft_strlen(s + start);
	if (len > subsize)
		len = subsize;
	k = malloc((len + 1) * sizeof(char));
	if (!k)
		return (NULL);
	while (i < len)
	{
		k[i] = s[start + i];
		i++;
	}
	k[i] = '\0';
	return (k);
}
