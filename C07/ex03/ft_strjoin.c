/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:42:58 by osmith            #+#    #+#             */
/*   Updated: 2021/09/17 20:45:08 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin2(int size, char **strs, char *sep, char *concat)
{
	int	j;
	int	i;
	int	c;

	j = 0;
	c = -1;
	while (c++ < size - 1)
	{
		i = 0;
		while (strs[c][i] != '\0')
			concat[j++] = strs[c][i++];
		i = 0;
		if ((c + 1) > size - 1)
		{
			concat[j++] = '\0';
			return (concat);
		}
		while (sep[i] != '\0')
			concat[j++] = sep[i++];
	}
	concat[j] = '\0';
	return (concat);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		c;

	c = 0;
	while (sep[c] != '\0')
		c++;
	if (size == 0)
		return ("");
	concat = malloc(sizeof(concat) * ((size + ((size - 1) * c)) + 1));
	return (ft_strjoin2(size, strs, sep, concat));
}
