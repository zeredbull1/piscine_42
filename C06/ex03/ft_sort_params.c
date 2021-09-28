/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 08:08:05 by osmith            #+#    #+#             */
/*   Updated: 2021/09/17 08:10:39 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2 && s1++ && s2++)
		;
	return (*s1 - *s2);
}

char	**ft_sort_int_tab(char **tab, int size)
{
	char	*temp[1];
	int		i ;
	int		j;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp[0] = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp[0];
			i = 0;
			continue ;
		}
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_int_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (*(argv[i] + j))
			j++;
		write(1, *&argv[i], j);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
