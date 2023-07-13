/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:55:33 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 14:05:08 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing(t_element **sequence, int argc, char **argv)
{
	int	nb_arg;
	int	i;

	nb_arg = argc - 1;
	while (nb_arg > 0)
	{
		add_element(sequence, argv[nb_arg]);
		nb_arg--;
	}
	same_number(*sequence);
	i = 0;
}

void	add_element(t_element **sequence, char *arg)
{
	long	i;
	int		x;

	x = 0;
	if (!arg || !arg[0])
		error();
	i = ft_atol(arg);
	if (i > 2147483647 || i < -2147483648)
		error();
	is_digit(arg);
	while (arg[x])
	{
		if (arg[x] == '-' || arg[x] == '+')
		{
			if (arg[x - 1] != 0 || arg[x + 1] == 0)
				error();
		}
		x++;
	}
	*sequence = lstnew(i, *sequence);
}

void	same_number(t_element *arg)
{
	t_element	*temp;
	t_element	*temp1;
	int			nb_of_same;

	temp = arg;
	while (temp)
	{
		nb_of_same = 0;
		temp1 = temp;
		while (temp1)
		{
			if (temp1->number == temp->number)
			{
				nb_of_same++;
				if (nb_of_same >= 2)
					error();
			}
			temp1 = temp1->next;
		}
		temp = temp->next;
	}
}

long	ft_atol(const char *str)
{
	int		x;
	int		i;
	long	y;

	i = 0;
	x = 1;
	y = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			error();
		if (str[i] == '-')
			x *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		y = y * 10 + (str[i] - 48);
		i++;
	}
	return (y * x);
}

void	is_digit(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '-' || arg[i] == '+')
			i++;
		else
		{
			if (ft_isdigit(arg[i]) == 0)
				error();
			i++;
		}
	}
}
