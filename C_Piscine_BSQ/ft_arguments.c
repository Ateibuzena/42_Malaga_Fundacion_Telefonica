/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arguments.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 23:00:20 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 14:09:05 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_arguments(char **argv, int i)
{
	int		len;
	char	*buffer;
	int		*array;

	len = ft_strlen_argv(argv, i - 1);
	buffer = (char *)malloc(len * 1);
	array = (int *)malloc((ft_strlen(buffer) + 1) * 4);
	ft_memory_error_int(array);
	ft_read_file(argv, i - 1, buffer);
	ft_putstr(buffer);
	ft_check(buffer, array);
	free(buffer);
}
