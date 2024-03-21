/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:40:06 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 14:07:54 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	*ft_check(char *buffer, int	*array)
{
	int		col;
	char	*str;

	col = -1;
	str = (char *)malloc(ft_strlen(buffer) + 1);
	while (buffer[++col] != '\0')
	{
		while (buffer[col] == '.')
		{
			if (buffer[col - 1] != '.'
				|| buffer[col - 1 - ft_cols(buffer)] != '.'
				|| buffer[col - ft_cols(buffer)] != '.')
				str[col] = '1';
			if (buffer[col - 1] == '.'
				&& buffer[col - 1 - ft_cols(buffer)] == '.'
				&& buffer[col - ft_cols(buffer)] == '.')
				str[col] = '.';
			col++;
		}
		if (buffer[col] == 'o')
			str[col] = '0';
		if (buffer[col] == '\n')
			str[col] = '\n';
	}
	return (array);
}
