/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:33:23 by sisingja          #+#    #+#             */
/*   Updated: 2025/01/23 18:34:22 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>

int		ft_printf(const char *str, ...);
int		p_str(char *str);
int		p_int(int n);
int		p_unsigned(unsigned int n);
int		p_ptr(void *ptr);
int		p_hex(unsigned int n, char c);

#endif
