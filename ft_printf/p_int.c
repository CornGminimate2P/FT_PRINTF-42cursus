/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 23:13:56 by sisingja          #+#    #+#             */
/*   Updated: 2025/01/23 23:15:49 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_int(int num)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa(num);
	len += write(1, str, ft_strlen(str));
	free(str);
	return (len);
}
