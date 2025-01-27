/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:47:49 by sisingja          #+#    #+#             */
/*   Updated: 2024/09/26 19:31:19 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			i;

	if (count != 0 && (size > INT_MAX / count))
		return (NULL);
	i = 0;
	s = malloc(count * size);
	if (!s)
		return (NULL);
	while (i < count * size)
		s[i++] = 0;
	return (s);
}
