/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:54:17 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 13:43:38 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_element **stack_a)
{
	t_element	*tmp;
	int			i;

	i = 0;
	tmp = *stack_a;
	while (tmp->next != NULL)
	{
		if (tmp->number > tmp->next->number)
		{
			i = 1;
			break ;
		}
		tmp = tmp->next;
	}
	return (i);
}

int	max(t_element *arg)
{
	int	max;

	max = arg->number;
	while (arg)
	{
		if (arg->number > max)
			max = arg->number;
		arg = arg->next;
	}
	return (max);
}

int	first_min(t_element *arg)
{
	int	min;

	min = arg->number;
	arg = arg->next;
	while (arg)
	{
		if (arg->number < min)
			min = arg->number;
		arg = arg->next;
	}
	return (min);
}

int	second_min(t_element *arg)
{
	int	min;
	int	min2;

	min = first_min(arg);
	if (arg->number != min)
		min2 = arg->number;
	else
	{
		arg = arg->next;
		min2 = arg->number;
	}
	while (arg)
	{
		if (arg->number < min2 && arg->number != min)
			min2 = arg->number;
		arg = arg->next;
	}
	return (min);
}
