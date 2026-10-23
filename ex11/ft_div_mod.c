/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:51:29 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:51:30 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int main(void)
{
	int num2 = 12;
	int num1 = 42;
	int div, mod;
	
    printf("Main with no args.\n");
	ft_div_mod(num1, num2, &div, &mod);
	printf("a[%d] / b[%d] = /[%d] %%[%d] \n", num1,num2, div,mod);

    return (0);
}
