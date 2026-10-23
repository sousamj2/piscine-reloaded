/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:55:43 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 15:47:27 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_print_str(char *str);
void	ft_putchar(char c);

/* void	ft_putchar(char c) */
/* { */
/* 	write(1, &c, 1); */
/* } */

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main(int argn, char *argv[])
{
	int	iarg;

	iarg = 1;
	while (iarg < argn)
	{
		ft_putstr(argv[iarg]);
		iarg++;
	}
	return (0);
}
