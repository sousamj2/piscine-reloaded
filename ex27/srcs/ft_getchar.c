/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:57:21 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:57:23 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

char	ft_getchar(int fd, int *bytes_read)
{
	char	c;

	*bytes_read = read(fd, &c, 1);
	return (c);
}
