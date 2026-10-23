/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:53:47 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:39:06 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

/* int	ft_strlen(char *str); */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/* int	main(void) */
/* { */
/* 	char	*str; */

/* 	str = "ola"; */
/* 	printf("[%s] has [%d] chars", str, ft_strlen(str)); */
/* 	return (0); */
/* } */
