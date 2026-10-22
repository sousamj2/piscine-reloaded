/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:54:50 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 17:55:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

#include <stdio.h>

int main(void)
{
	char * str = "ola";
	printf("[%s] has [%d] chars", str, ft_strlen(str));
	return (0);
}
