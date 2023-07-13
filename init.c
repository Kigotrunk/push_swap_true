/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <kortolan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:53:12 by kortolan          #+#    #+#             */
/*   Updated: 2023/06/10 13:45:48 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	*lstnew(int content, t_element *next)
{
	t_element	*lst;

	lst = malloc(sizeof(t_element));
	if (!lst)
		return (NULL);
	lst->number = content;
	lst->next = next;
	return (lst);
}

t_element	*ft_lstlast(t_element *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_element **lst, t_element *new)
{
	t_element	*lstb;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	lstb = ft_lstlast(*lst);
	lstb->next = new;
	new->next = NULL;
}

int	ft_lst_size(t_element *lst)
{
	int	size;

	if (!lst)
		error();
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	i;
	int	y;

	i = 0;
	x = 1;
	y = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		y = y * 10 + (str[i] - 48);
		i++;
	}
	return (y * x);
}
