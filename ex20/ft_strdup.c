/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:55:33 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:48:09 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int		count_chars;

	count_chars = 0;
	while (*str != '\0')
	{
		count_chars++;
		str++;
	}
	return (count_chars);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	char	*p;

	ret = malloc((1 + ft_strlen(src)) * sizeof(char));
	p = ret;
	while (*src != '\0')
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return (ret);
}

/* int	main(void) */
/* { */
/* 	char	*final; */
/* 	char	*src; */

/* 	src = "test"; */
/* 	final = ft_strdup(src); */
/* 	printf("Copying [%s] to [%s]\n", src, final); */
/* 	return (0); */
/* } */
