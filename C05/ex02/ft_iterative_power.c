/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:25:13 by osmith            #+#    #+#             */
/*   Updated: 2021/09/16 09:25:54 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_copy;

	nb_copy = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	while (--power > 0)
		nb *= nb_copy;
	return (nb);
}
