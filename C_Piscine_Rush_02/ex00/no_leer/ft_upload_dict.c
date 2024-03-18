/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upload_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:02:52 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/17 23:39:55 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <structure.h>

#define MAX_LINE_LENGTH 1000
#define my_sizeof(type) ((char *)(&type + 1) - (char *)(&type))

struct	KeyValue	*ft_upload_dict(char *file)
{
	int				fd; 
	int				num_lines;
	char			buffer[MAX_LINE_LENGTH];
	long long int	i;
	char 			*key;
	char 			*value;
	int 			j;
    int 			z;

	num_lines = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	while (read(fd, buffer, 1) > 0) 
	{	
		if (buffer[0] == '\n')
			num_lines ++;
	}
	close(fd);
	fd = open(file, O_RDONLY); 
	if (num_lines == 0)
	{
		close(fd);
		return (NULL);
	}
	struct	KeyValue *dict = malloc((num_lines + 1) 
 					* my_sizeof(struct	KeyValue));
	if (dict == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	i = 0;
	while (read(fd, buffer, MAX_LINE_LENGTH) > 0)
	{	
		fd = open(file, O_RDONLY);
	}
	key = malloc(MAX_LINE_LENGTH * my_sizeof(char));
	value = malloc(MAX_LINE_LENGTH * my_sizeof(char));
	while (buffer[i] != '\0')
    {
		j = 0;
		z = 0;
        while (buffer[i] != '\n' && buffer[i] != '\0')
        {
			while (buffer[i] >= 'a' && buffer[i] <= 'z')
			{
				value[j] = buffer[i];
				i++;
				j++;
			}
			while ((buffer[i] < 'a' || buffer[i] > 'z') 
					&& (buffer[i] < '0' || buffer[i] > '9'))
			{
				i++;
			}
			while (buffer[i] >= '0' && buffer[i] <= '9')
			{
				key[z] = buffer[i];
				i++;
				z++;
			}
        }
		value[j]= '\0';
		key[z] = '\0';
		if (buffer[i] != '\0')
			i++;
	}
	free(key);
	free(value);	
	close(fd);
	return (dict);
}
*/
