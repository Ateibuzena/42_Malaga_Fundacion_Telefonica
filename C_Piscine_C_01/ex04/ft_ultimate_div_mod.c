/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:06:55 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/04 14:11:48 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cociente;
	int	resto;

	cociente = *a / *b;
	resto = *a % *b;
	*a = cociente;
	*b = resto;
}
