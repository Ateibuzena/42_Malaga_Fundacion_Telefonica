/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:24:10 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/08 13:53:40 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int variable = 0;
    int *uno = &variable;
    int **dos = &uno;
    int ***tres = &dos;
    int ****cuatro = &tres;
    int *****cinco = &cuatro;
    int ******seis = &cinco;
    int *******siete = &seis;
    int ********ocho = &siete;
    int *********nueve = &ocho;
	int n;
	char c;
	int i;

	i = 0;

    ft_ultimate_ft(nueve);
	while (*********nueve != 0)
	{
		n = *********nueve / 10;
		c = n + '0';
		write(1, &c, 1);

		nueve++;
	}
    return (0);
}
