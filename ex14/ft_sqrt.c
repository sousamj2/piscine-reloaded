/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:53:27 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:36:21 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <limits.h> */

/* int	ft_sqrt(int nb); */

int	ft_sqrt(int nb)
{
	long	result;

	result = 1;
	while (result * result <= (long) nb)
	{
		if (result * result == nb)
			return ((int) result);
		result++;
	}
	return (0);
}

/* int	main(void) */
/* { */
/* 	int	num; */
/* 	int	res; */

/* 	num = INT_MAX; */
/* 	num = 100; */
/* 	printf("Main with no args.\n"); */
/* 	res = ft_sqrt(num); */
/* 	printf("Sqrt of num[%d] is [%d].\n", num, res); */
/* 	return (0); */
/* } */
