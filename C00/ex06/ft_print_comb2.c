/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:22:01 by osmith            #+#    #+#             */
/*   Updated: 2021/09/08 21:22:04 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(int a, int b)
{
	int	da ;
	int	db ;
	int	endflag ;

	endflag = 0 ;
	if (a == 98 && b == 99)
		endflag = 1;
	if (a < b)
	{
		db = (b / 10) + 48;
		da = (a / 10) + 48;
		b = (b % 10) + 48;
		a = (a % 10) + 48;
		ft_putchar(da);
		ft_putchar(a);
		write(1, " ", 1);
		ft_putchar(db);
		ft_putchar(b);
		if (endflag == 1)
			return ;
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	i ;
	int	j ;

	i = 0;
	j = 1;
	while (i < 100)
	{
		while (j < 100)
		{
			inter(i, j);
			j++;
		}
		j = 0;
		i++;
	}
}
