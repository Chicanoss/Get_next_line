/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:34:31 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/27 14:08:03 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

char *ft_cpy_str(char *buffer, int	size)
{
	char	*str;

	str = malloc((size + 1) * sizeof(char));
	str = buffer;
	printf("%s" , str);

	return(str);
}

char *get_next_line(int fd)
{
	char buffer[BUFFER_SIZE];
	int	size;
	char	str[126];

	size = read(fd, buffer, BUFFER_SIZE);
	//printf("%s" , buffer);
	str = ft_cpy_str(buffer, size);
	return(str);
}

int	main(void)
{
	int	fd;

	fd = open("test", 0x000);
	get_next_line(fd);
	return(0);
}