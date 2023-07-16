/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_little.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:54:09 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 13:34:55 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	for_3(t_element **a)
{
	int	i;

	i = max(*a);
	if ((*a)->number == i)
		ra(a);
	if ((*a)->next->number == i)
	{
		rra(a);
	}
	if ((*a)->number > (*a)->next->number)
		sa(a);
	return ;
}

void	for_5(t_element **a, t_element **b)
{
	int	x;

	x = 0;
	while (x < 2)
	{
		if ((*a)->index == 1 || (*a)->index == 2)
		{
			pb(a, b);
			x++;
		}
		else
			rra(a);
	}
	for_3(a);
	if ((*b)->next->number > (*b)->number)
		sb(b);
	pa(a, b);
	pa(a, b);
}

void	little_arg(t_element **a, t_element **b)
{
	if (ft_lst_size(*a) == 3)
	{
		for_3(a);
		return ;
	}
	else if (ft_lst_size(*a) == 2)
	{
		if ((*a)->number > (*a)->next->number)
			sa(a);
	}
	else if (ft_lst_size(*a) == 5)
	{
		for_5(a, b);
	}
	return ;
}
