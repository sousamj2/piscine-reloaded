/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:00:09 by marvin            #+#    #+#             */
/*   Updated: 2026/10/22 18:00:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdio.h>

int main(void)
{
	char * s1 = "olb";
	char * s2 = "olc";
	printf("s1[%s] s2[%s] has difference [%d].", s1, s2, ft_strcmp(s1,s2));
	return (0);
}
