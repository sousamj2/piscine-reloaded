/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:51:20 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:34:16 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

/* void	ft_swap(int *a, int *b); */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* int	main(void) */
/* { */
/* 	int	num1; */
/* 	int	num2; */

/* 	num1 = 10; */
/* 	num2 = 42; */
/* 	printf("Main with no args.\n"); */
/* 	printf("Before: a[%d] b[%d]\n", num1, num2); */
/* 	ft_swap(&num1, &num2); */
/* 	printf("After : a[%d] b[%d]\n", num1, num2); */
/* 	return (0); */
/* } */
