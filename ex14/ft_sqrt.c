/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:47:33 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 17:37:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
	long result;
	printf("%d\n",nb);

	result = 1;
	while (result*result <= (long) nb)
	{
		if(result*result == nb)
			return ((int) result);
		result++;
	}
		printf("%ld\n",result);
	return (0);
}

#include <limits.h>

int main(void)
{
	int num = INT_MAX;
	
    printf("Main with no args.\n");
	int res = ft_sqrt(num);
	printf("Sqrt of num[%d] is [%d].\n", num, res);

    return (0);
}
