/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_ptr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:00:57 by sisingja          #+#    #+#             */
/*   Updated: 2025/01/23 22:45:18 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_con(unsigned long ptr)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (ptr >= 16)
		len += ptr_con(ptr / 16);
	len += write(1, &base[ptr % 16], 1);
	return (len);
}

int	p_ptr(void *ptr)
{
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (ptr_con((unsigned long) ptr) + 2);
}
