/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_error_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:49:01 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 13:16:45 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

char	*ft_memory_error_char(char	*array)
{
	if (array == NULL)
	{
		write(1, "Array failed\n", 13);
		return (0);
	}
	return (array);
}
