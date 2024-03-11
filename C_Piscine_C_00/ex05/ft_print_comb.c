/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:21:48 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/04 18:37:49 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	b = '0';
	c = '1';
	while (++a <= '7')
	{
		b = '0';
		while (++b <= '8')
		{
			c = '0';
			while (++c <= '9')
			{
				if ((a < b) && (b < c))
					ft_print(a, b, c);
			}
		}
	}
}
