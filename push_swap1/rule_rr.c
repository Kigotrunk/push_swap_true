/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:11:42 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 14:18:19 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_element **element)
{
	t_element	*tmp2;
	t_element	*pile;
	t_element	*last;

	write(1, "rra\n", 4);
	pile = *element;
	last = *element;
	tmp2 = *element;
	if (*element == NULL)
		return ;
	while (last->next)
	{
		last = last->next;
		if (last->next != NULL)
			pile = pile->next;
	}
	if (last->next == NULL)
	{
		last->next = tmp2;
		pile->next = NULL;
	}
	*element = last;
}

void	rrb(t_element **element)
{
	t_element	*tmp2;
	t_element	*pile;
	t_element	*last;

	write(1, "rrb\n", 4);
	pile = *element;
	last = *element;
	tmp2 = *element;
	if (*element == NULL)
		return ;
	while (last->next)
	{
		last = last->next;
		if (last->next != NULL)
			pile = pile->next;
	}
	if (last->next == NULL)
	{
		last->next = tmp2;
		pile->next = NULL;
	}
	*element = last;
}

void	rrr(t_element **stack_a, t_element **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
