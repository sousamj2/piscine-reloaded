/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:29:51 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 09:41:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int main(void)
{
	int num = 10;
    printf("Main with no args.\n");
    printf("Number before: %d\n", num);
	ft_ft(&num);
    printf("Number after: %d\n", num);

    return (0);
}
