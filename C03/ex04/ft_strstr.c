/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:48:08 by osmith            #+#    #+#             */
/*   Updated: 2021/09/13 09:47:03 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (str[i + j] != to_find[j] && to_find[j] != '\0')
			{
				i++;
				j = 1;
				continue ;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			j++;
			continue ;
		}
		i++;
	}
	return (0);
}
