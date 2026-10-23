/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                  :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:50:22 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 16:25:00 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <unistd.h> */

void	ft_putchar(char c);

/* void	ft_putchar(char c) */
/* { */
/* 	write(1, &c, 1); */
/* } */

void	ft_print_numbers(void)
{
	char	letter;

	letter = '0';
	while (letter <= '9')
	{
		ft_putchar(letter);
		letter++;
	}
}

/* int	main(void) */
/* { */
/* 	ft_print_number(); */
/* 	return (0); */
/* } */
