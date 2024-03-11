/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:06:12 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/04 13:41:06 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int left, int right)
{
	char	a;
	char	b;

	a = (left / 10) + 48;
	b = (left % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	a = (right / 10) + 48;
	b = (right % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	left_n;
	int	right_n;

	left_n = -1;
	right_n = 0;
	while (++left_n < 99)
	{
		right_n = 0;
		while (right_n++ < 99)
		{
			if (left_n < right_n)
			{
				ft_print(left_n, right_n);
				if (left_n != 98)
					write(1, ", ", 2);
			}
		}
	}
}
