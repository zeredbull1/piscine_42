/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:48:07 by osmith            #+#    #+#             */
/*   Updated: 2021/09/13 14:20:51 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	truesize;
	unsigned int	j;
	unsigned int	temp;

	temp = size;
	j = ft_strlen(src);
	truesize = ft_strlen(dest);
	i = 0;
	if (size <= truesize)
		return (j+size);
	while (src[i] != '\0'
		&& (size - truesize - i - 1) > 0 && size - truesize > 0)
	{
		dest[truesize + i] = src[i];
		i++;
	}
	dest [truesize + i] = '\0';
	return (j + truesize);
}
