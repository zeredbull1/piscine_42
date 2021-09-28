/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:59:01 by osmith            #+#    #+#             */
/*   Updated: 2021/09/17 08:07:48 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (--argc > 0)
	{
		i = 0;
		while (*(argv[argc] + i))
			i++;
		write(1, *&argv[argc], i);
		write(1, "\n", 1);
	}
	return (0);
}