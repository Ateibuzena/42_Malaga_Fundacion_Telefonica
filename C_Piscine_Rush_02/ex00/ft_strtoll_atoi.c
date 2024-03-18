/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll_atoi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:48:06 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/17 21:13:19 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

long long int	ft_strtoll_atoi(char *str)
{
	long long int	result;
	char			*copy;
	int				len;

	result = 0;
	copy = str;
	len = ft_strlen(str);
	if (len > 21)
		return (-1);
	while (*copy >= '0' && *copy <= '9')
	{
		if (*copy < '0' || *copy > '9')
		{
			return (-1);
		}
		else
		{
			result = (result * 10) + (*copy - '0');
		}
		copy++;
	}
	return (result);
}
