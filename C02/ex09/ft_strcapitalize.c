/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:22:17 by osmith            #+#    #+#             */
/*   Updated: 2021/09/12 10:46:29 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}	
	return (0);
}

int	ft_str_is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	isprintt(char c)
{
	if ((c >= ' ' && c <= '~')
		&& !(ft_str_is_alpha(c) || ft_str_is_numeric (c)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_lowercase(str[0]))
		{
			str[0] -= 32;
			i++;
			continue ;
		}
		if (ft_str_is_alpha(str[i]) && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		if (isprintt(str[i - 1]) && ft_str_is_lowercase(str[i])
			&& (ft_str_is_alpha(str[i + 1]) || ft_str_is_numeric (str[i + 1])))
		{
			str[i] -= 32;
			i++;
			continue ;
		}
		i++;
	}
	return (str);
}
