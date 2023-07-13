/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:49:21 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 14:47:56 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_element **pile)
{
	int	tmp;

	if (!pile || ft_lst_size(*pile) < 2)
		return ;
	tmp = (*pile)->number;
	(*pile)->number = (*pile)->next->number;
	(*pile)->next->number = tmp;
}

void	sa(t_element **pile)
{
	swap(pile);
	write(1, "sa", 2);
	write(1, "\n", 1);
}

void	sb(t_element **pile)
{
	swap(pile);
	write(1, "sb", 2);
	write(1, "\n", 1);
}

void	ss(t_element **pile, t_element **pile_b)
{
	sa(pile);
	sb(pile_b);
}
