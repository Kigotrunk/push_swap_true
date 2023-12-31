/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:11:39 by kortolan          #+#    #+#             */
/*   Updated: 2022/11/15 18:38:58 by kortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*dest;
	size_t	x;

	x = 0;
	dest = str;
	while (x++ < n)
	{
		*dest++ = 0;
	}
}
