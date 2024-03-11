/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:50:25 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/04 16:44:23 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	last;
	int	i;

	while (i < size)
	{
		start = tab[i];
		last = tab[size - 1];
		tab[i] = last;
		tab[size - 1] = start;
		i++;
		size--;
	}
}
