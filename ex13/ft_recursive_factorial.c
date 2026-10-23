/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:52:22 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:52:22 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb-1));
}


int main(void)
{
	int num = 16;
	
    printf("Main with no args.\n");
	int res = ft_recursive_factorial(num);
	printf("Factorial of num[%d] is [%d].\n", num, res);

    return (0);
}
