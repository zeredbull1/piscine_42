/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:34:13 by osmith            #+#    #+#             */
/*   Updated: 2021/09/15 15:43:51 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!(*base) || !*(base + 1))
		return (1);
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (1);
			j++;
		}
		if (*(base + i) == '+' || *(base + i) == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_int;
	unsigned int	nbr_u;
	char			c[100];
	int				i;

	i = 0;
	if (check_error(base))
		return ;
	base_int = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr_u = nbr * (-1);
	}
	else
		nbr_u = nbr;
	while (nbr_u > 0)
	{
		c[i] = base[nbr_u % base_int];
		nbr_u /= base_int;
		i++;
	}
	while (--i >= 0)
		ft_putchar(c[i]);
}
