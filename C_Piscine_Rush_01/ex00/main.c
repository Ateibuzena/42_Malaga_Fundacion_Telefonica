/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:20:21 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/10 21:30:26 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	write(2, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	ac;
	int	*tab;

	i = 0;
	if (argc != 2)
	{
		ft_error();
		return (1);
	}
	ac = ft_number_of_arguments(argv[1]);
	if (ac == 0 || ac / 4 > 9)
	{
		ft_error();
		return (1);
	}
	tab = ft_arg_to_tab(argv[1], ac);
	if (tab == NULL || ac / 4 == 0)
	{
		ft_error();
		return (1);
	}
	if (rush01(ac / 4, tab))
		return (1);
	return (0);
}
