/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_unsigned.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:02:06 by sisingja          #+#    #+#             */
/*   Updated: 2025/01/23 23:05:33 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_unsigned(unsigned int num)
{
	int	len;

	len = 0;
	if (num > 9)
		len += p_unsigned(num / 10);
	num = (num % 10) + 48;
	len += write(1, &num, 1);
	return (len);
}
