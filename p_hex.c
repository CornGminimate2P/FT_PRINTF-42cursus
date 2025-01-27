/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_hex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:58:38 by sisingja          #+#    #+#             */
/*   Updated: 2025/01/23 23:17:41 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_hex(unsigned int num, char flags)
{
	char		*base;
	char		digit;
	int			count;

	base = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += p_hex(num / 16, flags);
	if (flags == 'x')
		count += write(1, &base[num % 16], 1);
	else if (flags == 'X')
	{
		digit = ft_toupper(base[num % 16]);
		count += write(1, &digit, 1);
	}
	return (count);
}
