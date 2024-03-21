/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:31:11 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 23:48:37 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] > 10 && str[i] < 14) || (str[i] == 32))
		++i;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num = (num * 10) + str[i] - 48;
		++i;
	}
	return (num * sign);
}
