/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:55:28 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:55:29 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*p;
	int	val;

	if (max <= min)
		return (NULL);
	ret = malloc((max - min) * sizeof(int));
	p = ret;
	val = min;
	while (val < max)
	{
		*p = val;
		p++;
		val++;
	}
	return (ret);
}

/* #include <stdio.h> */
/* int main () */
/* { */
/* 	int min = 51; */
/* 	int max = 5; */
/* 	int it = 0; */
/* 	int * test = ft_range(min,max); */
/* 	while (it < (max - min)) */
/* 	{ */
/* 		printf("%d, ", *test); */
/* 		test++; */
/* 		it++; */
/* 	} */
/* 	printf("\b\b\nPointer is [%p]\n",test); */
/* } */
