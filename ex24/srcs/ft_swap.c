/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:56:11 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:56:12 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_swap(int *a, int *b)
{
	int	temporary_pointer;

	temporary_pointer = *a;
	*a = *b;
	*b = temporary_pointer;
}
