/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_error_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:46:43 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 13:16:13 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	*ft_memory_error_int(int *array)
{
	if (array == 0)
	{
		write(1, "Array failed\n", 13);
		return (0);
	}
	return (array);
}
