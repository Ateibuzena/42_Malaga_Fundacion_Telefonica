/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cols.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:34:59 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 12:35:15 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	ft_cols(char *buffer)
{
	int	cols;

	cols = 0;
	while (buffer[cols] != '\n')
		cols++;
	return (cols + 1);
}
