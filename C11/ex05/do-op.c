/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:58:03 by osmith            #+#    #+#             */
/*   Updated: 2021/09/27 15:07:31 by osmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_stock.h"

int	doop(int a, char op, int b)
{
	int	result;
	int	(*calc[5])(int a, int b);

	calc [0] = ft_sum;
	calc [1] = ft_sub;
	calc [2] = ft_div;
	calc [3] = ft_mult;
	calc [4] = ft_mod;
	result = 0;
	if (op == '+')
		result = calc[0](a, b);
	else if (op == '-')
		result = calc[1](a, b);
	else if (op == '/')
		result = calc[2](a, b);
	else if (op == '*')
		result = calc[3](a, b);
	else if (op == '%')
		result = calc[4](a, b);
	return (result);
}

int	ft_atoi(char *str)
{
	int	num;
	int	countneg;
	int	i;

	i = 0;
	countneg = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			countneg++;
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = num * 10 + (*(str + i) - 48);
		i++;
	}
	if (countneg % 2)
		num *= -1;
	return (num);
}

int	check_op(char op)
{
	if (op == '+')
		return (1);
	if (op == '-')
		return (1);
	if (op == '/')
		return (1);
	if (op == '*')
		return (1);
	if (op == '%')
		return (1);
	return (0);
}

int	check_illegal(char op, char b)
{
	if (op == '/' && b == '0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (op == '%' && b == '0')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc != 4)
		return (0);
	if (!check_op(argv[2][0]))
	{
		write (1, "0\n", 2);
		return (0);
	}
	if (!check_illegal(argv[2][0], argv[3][0]))
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	b = doop(a, argv[2][0], b);
	ft_putnbr(b);
	write (1, "\n", 1);
}
