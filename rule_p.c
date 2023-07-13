/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:08:22 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 14:14:39 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_element **a, t_element **b)
{
	t_element	*tmp;

	if (*a == NULL)
		return ;
	tmp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = tmp;
}

void	pa(t_element **a, t_element **b)
{
	push(b, a);
	write (1, "pa\n", 3);
}

void	pb(t_element **a, t_element **b)
{
	push(a, b);
	write (1, "pb\n", 3);
	return ;
}
