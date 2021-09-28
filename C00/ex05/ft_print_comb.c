/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:17:40 by osmith            #+#    #+#             */
/*   Updated: 2021/09/08 21:17:46 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char a, char b, char c)
{
	if (a != b && b != c && a != c && c > b && b > a && c > a)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a == 55 && b == 56 && c == 57)
			return ;
		write(1, ",", 1);
		write(1, " ", 1);
	}	
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				inter(a, b, c);
				c++;
			}
			c = 50;
			b++;
		}
		b = 49;
		a++;
	}	
}
