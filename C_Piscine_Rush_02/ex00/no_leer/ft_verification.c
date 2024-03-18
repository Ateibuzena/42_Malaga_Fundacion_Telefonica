/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verification.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:04:16 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/17 23:38:37 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_verification(char **str)
{
	int	i;

	i = 0;
	if (str[1][i] == '\0')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (str[1][i] == '-')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (str[1][i] != '\0')
	{
		if (str[1][i] < '0' || str[1][i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
*/
