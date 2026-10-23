/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:35:36 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 10:00:22 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_print(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
	return ;  
}

int	main(void)
{
    printf("Main with no args.\n");

	int	myarray [] = {2, 5, 3, 2, -1, 0, 3};
	ft_foreach(myarray, 7, ft_print);
	return (0);
}

void	ft_print(int nb)
{
	printf("%d, ", nb);
}
