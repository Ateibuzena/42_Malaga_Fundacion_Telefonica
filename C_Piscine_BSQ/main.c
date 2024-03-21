/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:34:58 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 14:26:26 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int	main(int argc, char **argv)
{
	int		i;

	i = 2;
	if (argc == 1)
	{
		write(2, "Error file\n", 11);
		return (1);
	}
	if (argc == 2)
	{
		ft_arguments(argv, i);
		return (1);
	}
	if (argc > 2)
	{
		while (i <= argc)
		{
			ft_arguments(argv, i);
			write(1, "\n", 1);
			i++;
		}
		return (1);
	}
	return (0);
}
