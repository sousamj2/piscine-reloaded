/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:40:48 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:53:16 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *));
int	ft_strlen(char *str);
/* int	ft_print(char *str); */

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

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	len_array;

	len_array = 0;
	while (ft_strlen(*tab))
	{
		len_array += f(*tab);
		tab++;
	}
	return (len_array);
}

/* int	main(void) */
/* { */
/* 	int		n_array; */
/* 	char	*myarray[] = {"This", "is", "my", "array", "\0"}; */
/* 	printf("Main with no args.\n"); */
/* 	n_array = ft_count_if(myarray, ft_print); */
/* 	printf("'This' 'is' 'my' 'array' '\\0' array has %d elements.\n", n_array); */
/* 	return (0); */
/* } */

/* int	ft_print(char *str) */
/* { */
/* 	printf("%s\n", str); */
/* 	return (1); */
/* } */
