/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 08:57:28 by marisous          #+#    #+#             */
/*   Updated: 2026/10/23 08:57:28 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_getstr(int fd, char *string, int buffer_size)
{
	int	bytes_read;

	bytes_read = read(fd, string, buffer_size);
	return (bytes_read);
}
