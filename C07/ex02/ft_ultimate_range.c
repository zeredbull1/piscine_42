/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:45:24 by osmith            #+#    #+#             */
/*   Updated: 2021/09/17 20:46:20 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}		
	tab = malloc(sizeof(range) * (max - min));
	if (!tab)
		return (-1);
	while (min < max)
	{
		tab[i++] = min++;
	}
	*range = tab;
	return (i);
}
