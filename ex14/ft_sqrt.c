/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:53:27 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:53:27 by marisous         ###   ########.fr       */
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
