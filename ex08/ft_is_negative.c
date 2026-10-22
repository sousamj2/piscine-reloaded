/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:22:55 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 09:31:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char *c);

void	ft_putchar(char *c)
{
	write(1, c, 1);
}


void	ft_is_negative(int n)
{
	char	letra;

	letra = 'N';
	if (n >= 0)
		letra = 'P';
	ft_putchar(&letra);
}

int	main(void)
{
    ft_is_negative(5);
	ft_is_negative(-2);
	ft_is_negative(0);
	return (0);
}
