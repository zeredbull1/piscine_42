/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:26:07 by osmith            #+#    #+#             */
/*   Updated: 2021/09/27 11:26:09 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab2;

	tab2 = malloc(sizeof(tab2) * (length + 1));
	i = 0;
	while (i < length)
	{
		tab2[i] = (*f)(tab[i]);
		i++;
	}
	tab2[i] = '\0';
	return (tab2);
}
