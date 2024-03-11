/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:45:44 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/03 13:20:23 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_line(char a, char b, char c, int x)
{
	int	column;

	column = 0;
	while (column <= x)
	{
		column ++;
		if (column == 1)
			ft_putchar(a);
		if (column > 1 && column < x)
			ft_putchar(b);
		if (column == x && column != 1)
			ft_putchar(c);
	}
}

void	ft_errors(void)
{
	write(1, "Only x, y > 0", 13);
}

void	rush(int x, int y)
{
	int	row;

	if ((x > 0) && (y > 0))
	{
		row = 1;
		while (row <= y)
		{
			if (row == 1)
				ft_line('A', 'B', 'C', x);
			if (row > 1 && row < y)
				ft_line('B', ' ', 'B', x);
			if (row == y && row != 1)
				ft_line('C', 'B', 'A', x);
			ft_putchar('\n');
			row ++;
		}
	}
	else
		ft_errors();
}
