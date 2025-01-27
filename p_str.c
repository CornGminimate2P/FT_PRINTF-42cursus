/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_str.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:06:26 by sisingja          #+#    #+#             */
/*   Updated: 2025/01/23 20:25:20 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_str(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	else
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
}
