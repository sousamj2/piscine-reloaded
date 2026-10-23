/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:51:40 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:51:41 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
	int result;

	result = 1;

	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}


int main(void)
{
	int num = 4;
	
    printf("Main with no args.\n");
	int res = ft_iterative_factorial(num);
	printf("Factorial of num[%d] is [%d].\n", num, res);

    return (0);
}
