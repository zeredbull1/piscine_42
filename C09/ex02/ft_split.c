/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:27:20 by osmith            #+#    #+#             */
/*   Updated: 2021/09/23 18:27:27 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	char_in_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (*(sep + i) != '\0')
	{
		if (*(sep + i) == c)
			return (1);
		i++;
	}
	return (0);
}

int	w_count(char *str, char *charset)
{
	int	nb_words;
	int	i;

	nb_words = 0;
	i = 0;
	while (*(str + i))
	{
		if (!char_in_sep(*(str + i), charset))
		{
			nb_words++;
			i++;
			while (!char_in_sep(*(str + i), charset) && *(str + i))
				i++;
		}
		else
			i++;
	}
	return (nb_words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int		nb_words;
	char	**split;

	nb_words = w_count(str, charset);
	split = malloc((nb_words + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (k < nb_words)
	{
		while (char_in_sep(*(str + i), charset))
			i++;
		j = i;
		while (!char_in_sep(*(str + i), charset) && *(str + i) != '\0')
			i++;
		split[k] = malloc((i - j + 1) * sizeof(char));
		split[k] = ft_strncpy(split[k], str + j, i - j);
		while (char_in_sep(*(str + i), charset))
			i++;
		k++;
	}
	split[k] = 0;
	return (split);
}
