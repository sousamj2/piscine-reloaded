/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:59:02 by marvin            #+#    #+#             */
/*   Updated: 2026/10/21 16:24:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char *c);

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

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

int main(void)
{
    ft_print_number();
	return (0);
}
