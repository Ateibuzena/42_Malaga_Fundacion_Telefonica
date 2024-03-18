/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:21:57 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/17 23:37:51 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <structure.h>

int	ft_argc_2(char **argv)
{
	int				i;
	long long int	n;

	n = 0;
	i = ft_verification(argv);
	if (i == 1)
	{
		n = ft_strtoll_atoi(argv[1]);
		if (n >= 0)
		{
			ft_putnbr_pro(n);
		}
		else
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		(void)argv;
		write(1, "Error\n", 6);
	}
	if (argc == 2)
		ft_argc_2(argv);
	if (argc > 2)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	return (0);
}
*/
