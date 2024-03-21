/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:19:00 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/18 22:37:49 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

char	*ft_read_file(char **argv, int x, char *buffer)
{
	int		fd;
	char	buffer_2[5000];
	int		i;
	int		count;

	i = 0;
	fd = open(argv[x], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error File\n", 11);
		return (NULL);
	}
	if (read(fd, buffer_2, 5000) > 0)
	{
		count = ft_count_size(buffer_2);
		while (buffer_2[i + count] != '\0')
		{
			buffer[i] = buffer_2[i + count];
			i++;
		}
		return (buffer);
	}
	return (NULL);
}
