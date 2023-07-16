/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:00:48 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 13:31:01 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_in_b(t_element **stack_a, t_element **stack_b, int n)
{
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index <= n)
		{
			pb (stack_a, stack_b);
			n++;
			opti_b(stack_b);
		}
		else
			ra(stack_a);
	}
}

void	opti_b(t_element **stack_b)
{
	if (ft_lst_size(*stack_b) > 1 && ft_lst_size(*stack_b) < (*stack_b)->index)
		rb(stack_b);
}

void	big_arg(t_element **stack_a, t_element **stack_b, int n)
{
	t_element	*tmp;
	int			i;

	i = 0;
	all_in_b(stack_a, stack_b, n);
	tmp = *stack_b;
	while (*stack_b)
	{
		while (tmp->number != max(*stack_b))
		{
			i++;
			tmp = tmp->next;
		}
		if (max(*stack_b) == (*stack_b)->number)
			pa (stack_a, stack_b);
		else if (i <= ft_lst_size(*stack_b) / 2)
			rb(stack_b);
		else if (i > ft_lst_size(*stack_b) / 2)
			rrb(stack_b);
		tmp = *stack_b;
		i = 0;
	}
}
