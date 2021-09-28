/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:20:36 by osmith            #+#    #+#             */
/*   Updated: 2021/09/16 15:07:27 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	limit;
	int	h;

	limit = 100;
	i = 0;
	h = (1 + nb / 1) / 2;
	while (i < limit)
	{
		h = (h + nb / h) / 2;
		if ((h * h) == nb)
			return (h);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	count;
	int	copy;
	int	racine;

	copy = nb;
	count = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (!ft_sqrt(copy))
		copy++;
	racine = ft_sqrt(copy);
	while (racine > 2)
	{
		if ((nb % racine) == 0)
			return (0);
		racine--;
	}
	return (1);
}
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_is_prime(2147465599));
}