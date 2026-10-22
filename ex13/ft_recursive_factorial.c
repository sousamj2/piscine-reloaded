/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:47:33 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 10:04:44 by marvin           ###   ########.fr       */
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
