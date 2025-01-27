/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <ssingjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:46:32 by ssingjar          #+#    #+#             */
/*   Updated: 2024/09/25 22:50:10 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*k;

	i = 0;
	k = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!k || !s || !f)
		return (NULL);
	while (i < ft_strlen(s))
	{
		k[i] = (*f)(i, s[i]);
		i++;
	}
	k[i] = '\0';
	return (k);
}
