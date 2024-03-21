/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cols_rows.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:15:19 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 12:30:40 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_cols_rows(char *buffer, int *cols, int *rows, int *current_cols)
{
	char	*ptr;

	*rows = 0;
	*cols = 0;
	ptr = buffer;
	while (*ptr != '\0')
	{
		if (*ptr == '\n')
		{
			(*rows)++;
			if (*current_cols > *cols)
				*cols = *current_cols;
			*current_cols = 0;
		}
		else
			(*current_cols)++;
		ptr++;
	}
	if (*current_cols > 0)
	{
		(*rows)++;
		if (*current_cols > *cols)
			*cols = *current_cols;
	}
}
