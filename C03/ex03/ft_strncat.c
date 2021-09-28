/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:48:07 by osmith            #+#    #+#             */
/*   Updated: 2021/09/12 14:09:15 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[i] != '\0' && nb > 0)
	{
		dest[size + i] = src[i];
		i++;
		nb--;
	}
	dest [size + i] = '\0';
	return (dest);
}
