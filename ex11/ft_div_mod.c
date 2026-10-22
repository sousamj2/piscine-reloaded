/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:47:33 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 09:52:13 by marvin           ###   ########.fr       */
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
