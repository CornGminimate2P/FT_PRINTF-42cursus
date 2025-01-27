/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisingja <sisingja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:11:09 by ssingjar          #+#    #+#             */
/*   Updated: 2024/09/26 19:35:19 by sisingja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_size(int nb)
{
	size_t	i;

	i = 1;
	while (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*gimme;
	int			i;
	long int	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb = n;
	i = f_size(nb);
	gimme = malloc(i * sizeof(char) + 1);
	if (!gimme)
		return (0);
	gimme[i--] = '\0';
	if (nb == 0)
		gimme[0] = '0';
	if (nb < 0)
	{
		gimme[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		gimme[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (gimme);
}
