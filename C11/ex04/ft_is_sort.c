/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:28:54 by osmith            #+#    #+#             */
/*   Updated: 2021/09/27 12:29:11 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	croiss;
	int	decroiss;

	i = 0;
	croiss = 1;
	decroiss = 1;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decroiss = 0;
		else if (f(tab[i], tab[i + 1]) < 0)
			croiss = 0;
		i++;
	}
	return (croiss || decroiss);
}
