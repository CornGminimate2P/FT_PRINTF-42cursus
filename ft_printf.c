/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:38:58 by sisingja          #+#    #+#             */
/*   Updated: 2025/01/23 23:44:20 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flags_convert(char c, va_list args)
{
	if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (c == 's')
		return (p_str(va_arg(args, char *)));
	else if (c == 'p')
		return (p_ptr(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (p_int(va_arg(args, int)));
	else if (c == 'u')
		return (p_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (p_hex(va_arg(args, unsigned int), c));
	else if (c == 'X')
		return (p_hex(va_arg(args, unsigned int), c));
	return (0);
}

int	ft_printf(const char *flags, ...)
{
	int			i;
	int			ret;
	va_list		args;

	if (!flags)
		return (0);
	i = 0;
	ret = 0;
	va_start(args, flags);
	while (flags[i])
	{
		if (flags[i] == '%')
		{
			i++;
			ret += flags_convert(flags[i], args);
		}
		else
			ret += write(1, &flags[i], 1);
		i++;
	}
	va_end(args);
	return (ret);
}
