/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:53:58 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 14:05:30 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "olb";
	s2 = "ola";
	printf("s1[%s] s2[%s] has difference [%d].", s1, s2, ft_strcmp(s1, s2));
	return (0);
}
