/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:59:02 by marvin            #+#    #+#             */
/*   Updated: 2026/10/21 16:07:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char *c);

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

void	ft_print_alphabet(void)
{
	char	letter;
	char	*ptr;
	
	letter = 'a';
	ptr = &letter;
	while (letter <= 'z')
	{
		ft_putchar(ptr);
		letter++;
	}
}

int main(void)
{
    ft_print_alphabet();
	return (0);
}
