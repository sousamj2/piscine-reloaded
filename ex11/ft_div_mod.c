/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:51:29 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:34:42 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

/* void	ft_div_mod(int a, int b, int *div, int *mod); */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void) */
/* { */
/* 	int	num2; */
/* 	int	num1; */
/* 	int	div; */
/* 	int	mod; */

/* 	num1 = 42; */
/* 	num2 = 10; */
/* 	printf("Main with no args.\n"); */
/* 	ft_div_mod(num1, num2, &div, &mod); */
/* 	printf("a[%d] / b[%d] = /[%d] %%[%d] \n", num1, num2, div, mod); */
/* 	return (0); */
/* } */
