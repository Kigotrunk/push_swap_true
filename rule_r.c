/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:45:24 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 14:17:14 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_element **element_a)
{
	t_element	*tmp;
	int			start;
	int			start_index;

	tmp = *element_a;
	start = tmp->number;
	start_index = tmp->index;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next != NULL)
	{
		tmp->number = tmp->next->number;
		tmp->index = tmp->next->index;
		tmp = tmp->next;
	}
	tmp->number = start;
	tmp->index = start_index;
	write(1, "ra", 2);
	write(1, "\n", 1);
}

void	rb(t_element **element_a)
{
	t_element	*tmp;
	int			start;
	int			start_index;

	tmp = *element_a;
	start = tmp->number;
	start_index = tmp->index;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next != NULL)
	{
		tmp->number = tmp->next->number;
		tmp->index = tmp->next->index;
		tmp = tmp->next;
	}
	tmp->number = start;
	tmp->index = start_index;
	write(1, "rb", 2);
	write(1, "\n", 1);
}

void	rr(t_element **element_a, t_element **element_b)
{
	ra(element_a);
	rb(element_b);
}	
