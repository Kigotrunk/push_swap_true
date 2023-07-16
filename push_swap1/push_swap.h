/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:37:26 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 14:11:53 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_element
{
	int					number;
	int					index;
	struct s_element	*next;
}	t_element;

t_element	*lstnew(int content, t_element *next);
t_element	*ft_lstlast(t_element *lst);
void		ft_lstadd_back(t_element **lst, t_element *new);
void		parsing(t_element **sequence, int argc, char **argv);
void		add_element(t_element **sequence, char *arg);
void		same_number(t_element *arg);
void		for_3(t_element **a);
void		for_5(t_element **a, t_element **b);
void		all_in_b(t_element **stack_a, t_element **stack_b, int n);
int			max(t_element *arg);
int			first_min(t_element *arg);
void		push(t_element **a, t_element **b);
void		pa(t_element **a, t_element **b);
void		pb(t_element **a, t_element **b);
void		ra(t_element **element_a);
void		rb(t_element **element_b);
void		rr(t_element **element_a, t_element **element_b);
void		rrb(t_element **element);
void		rra(t_element **element);
void		ss(t_element **pile, t_element **pile_b);
void		sb(t_element **pile);
void		sa(t_element **pile);
int			ft_lst_size(t_element *lst);
void		print_arg(t_element **stack_a);
int			second_min(t_element *arg);
void		little_arg(t_element **a, t_element **b);
void		opti_b(t_element **stack_b);
void		big_arg(t_element **stack_a, t_element **stack_b, int n);
int			first_min_index(t_element *arg);
void		index_give(t_element **stack_a);
void		index_init(t_element *stack_a);
int			ft_atoi(const char *str);
void		error(void);
void		arg_int(char **argv, int n);
long		ft_atol(const char *str);
void		is_digit(char *arg);
int			is_sorted(t_element **stack_a);
void		free_stack(t_element **stack_a);

#endif
