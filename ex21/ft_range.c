/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:55:28 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:50:19 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

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

/* int	main(void) */
/* { */
/* 	int	min; */
/* 	int	max; */
/* 	int	it; */
/* 	int	*test; */

/* 	min = 51; */
/* 	max = 5; */
/* 	it = 0; */
/* 	test = ft_range(min, max); */
/* 	while (it < (max - min)) */
/* 	{ */
/* 		printf("%d, ", *test); */
/* 		test++; */
/* 		it++; */
/* 	} */
/* 	printf("\b\b\nPointer is [%p]\n", test); */
/* 	return (0); */
/* } */
