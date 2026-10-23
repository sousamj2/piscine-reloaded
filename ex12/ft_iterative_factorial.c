/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:51:40 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 16:13:32 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/* int	main(void) */
/* { */
/* 	int	num; */
/* 	int	res; */

/* 	num = 1; */
/* 	printf("Main with no args.\n"); */
/* 	res = ft_iterative_factorial(num); */
/* 	printf("Factorial of num[%d] is [%d].\n", num, res); */
/* 	return (0); */
/* } */
