/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:31:03 by sisingja          #+#    #+#             */
/*   Updated: 2024/08/29 01:09:55 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dtl;
	size_t	scl;

	dtl = ft_strlen(dst);
	scl = ft_strlen(src);
	if (dtl >= dstsize)
		dtl = dstsize;
	if (dtl == dstsize)
		return (dstsize + scl);
	if (scl < dstsize - dtl)
		ft_memcpy(dst + dtl, src, scl + 1);
	else
	{
		ft_memcpy(dst + dtl, src, dstsize - dtl - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dtl + scl);
}
