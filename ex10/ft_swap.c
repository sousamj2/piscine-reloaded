/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:29:51 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 09:47:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(void)
{
	int num1 = 10;
	int num2 = 42;
    printf("Main with no args.\n");
    printf("Before: a[%d] b[%d]\n", num1,num2);
	ft_swap(&num1, &num2);
    printf("After : a[%d] b[%d]\n", num1,num2);

    return (0);
}
