/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 09:15:38 by osmith            #+#    #+#             */
/*   Updated: 2021/09/17 10:27:41 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = malloc(sizeof(ptr) * (max - min));
	if (!ptr)
		return (NULL);
	while (min < max)
	{
		ptr[i++] = min++;
	}
	return (ptr);
}
