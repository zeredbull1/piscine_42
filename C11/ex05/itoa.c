/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:08:12 by osmith            #+#    #+#             */
/*   Updated: 2021/09/27 15:08:52 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_stock.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
		nb = 0;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 0)
	{
		if ((nb / 10) != 0)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	if (nb == 0)
		ft_putchar('0');
}
