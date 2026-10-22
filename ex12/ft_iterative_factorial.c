/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:47:33 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 09:57:26 by marvin           ###   ########.fr       */
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
