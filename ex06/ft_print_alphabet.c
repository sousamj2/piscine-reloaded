/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:49:52 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 15:48:37 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <unistd.h> */

void	ft_putchar(char c);

/* void	ft_putchar(char c) */
/* { */
/* 	write(1, &c, 1); */
/* } */

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

/* int	main(void) */
/* { */
/* 	ft_print_alphabet(); */
/* 	return (0); */
/* } */
