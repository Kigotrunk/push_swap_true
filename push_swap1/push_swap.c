/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:38:37 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 14:03:58 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_element	*stack_a;
	t_element	*stack_b;

	if (argc == 1)
		return (0);
	parsing(&stack_a, argc, argv);
	index_give(&stack_a);
	if (is_sorted(&stack_a) == 0)
	{
		free_stack(&stack_a);
		return (0);
	}
	if (argc == 6 || argc == 4 || argc == 3)
		little_arg(&stack_a, &stack_b);
	else if (argc <= 101)
		big_arg(&stack_a, &stack_b, 15);
	else
		big_arg(&stack_a, &stack_b, 28);
	free_stack(&stack_a);
}

void	error(void)
{
	write (2, "error\n", 6);
	exit(EXIT_FAILURE);
}

void	free_stack(t_element **stack_a)
{
	t_element	*tmp;

	tmp = (*stack_a);
	while (tmp)
	{
		*stack_a = (*stack_a)->next;
		if (tmp != NULL)
			free(tmp);
		tmp = (*stack_a);
	}
}
