/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:54:48 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/17 23:39:04 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

long long int	ft_put_error()
{
	write(1, "Error\n", 6);
	return (-1);
}

void	ft_putnbr_pro(long long int result)
{
	char	buffer[21];
	int		i;
	int		count;

	count = 0;
	i = 20;
	if (result == 0)
	{
		buffer[--i] = '0';
		count = 1;
	}
	else
	{
		while (result != 0)
		{
			buffer[--i] = result % 10 + '0';
			result = result / 10;
			count++;
		}
	}
	if (result < 0 || count > 20)
        result = ft_put_error();
	write(1, &buffer[i], 20 - i);
}
*/
