/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:38:00 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/18 22:55:00 by aehrl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_size(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i] != '.')
	{
		count++;
		i++;
	}
	count = count + 4;
	return (count);
}
