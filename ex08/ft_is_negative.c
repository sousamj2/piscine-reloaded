/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:50:42 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:37:25 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_putchar(char *c);

/* void	ft_putchar(char *c) */
/* { */
/* 	write(1, c, 1); */
/* } */

void	ft_is_negative(int n)
{
	char	letter;

	letter = 'N';
	if (n >= 0)
		letter = 'P';
	ft_putchar(&letter);
}

/* int	main(void) */
/* { */
/* 	ft_is_negative(5); */
/* 	ft_is_negative(-2); */
/* 	ft_is_negative(0); */
/* 	return (0); */
/* } */
