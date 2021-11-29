/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:34:31 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/29 12:27:59 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *get_next_line(int fd)
{
	char buffer[BUFFER_SIZE];
	int	size;
	char	str[BUFFER_SIZE + 1];

	size = read(fd, buffer, BUFFER_SIZE);
	str = buffer;
	str[size] = '\0';
	printf("%s" , str);
	return(str);
}

int	main(void)
{
	int	fd;

	fd = open("test", 0x000);
	get_next_line(fd);
	return(0);
}