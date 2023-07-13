/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:55:21 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 13:39:19 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_init(t_element *stack_a)
{
	while (stack_a)
	{
		stack_a->index = -1;
		stack_a = stack_a->next;
	}
	return ;
}

void	index_give(t_element **stack_a)
{
	int			i;
	int			j;
	t_element	*tmp;

	tmp = *stack_a;
	j = 1;
	index_init(tmp);
	i = first_min_index(tmp);
	while (j <= ft_lst_size(*stack_a))
	{
		while (tmp)
		{
			if (tmp->number == i)
			{
				tmp->index = j;
				j++;
				break ;
			}
			tmp = tmp->next;
		}
		tmp = *stack_a;
		i = first_min_index(tmp);
	}
}

int	first_min_index(t_element *arg)
{
	int	min;

	while (arg->index != -1 && arg->next != NULL)
		arg = arg->next;
	min = arg->number;
	if (arg->next == NULL)
		return (min);
	while (arg)
	{
		if (arg->number < min && arg->index == -1)
			min = arg->number;
		arg = arg->next;
	}
	return (min);
}
