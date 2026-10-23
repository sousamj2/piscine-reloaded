/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:50:22 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:37:12 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <unistd.h> */

void	ft_putchar(char *c);

/* void	ft_putchar(char *c) */
/* { */
/* 	write(1, c, 1); */
/* } */

void	ft_print_number(void)
{
	char	letter;
	char	*ptr;

	letter = '0';
	ptr = &letter;
	while (letter <= '9')
	{
		ft_putchar(ptr);
		letter++;
	}
}

/* int	main(void) */
/* { */
/* 	ft_print_number(); */
/* 	return (0); */
/* } */
