/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:41:32 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/17 23:36:56 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <structure.h>

void	ft_space(char *str)
{
	int	start;
	int	end;

	end = ft_strlen(str) - 1;
	start = 0;
	while (str[start] == ' ' || str[start] == '\t')
		start++;
	while (end > start && (str[end] == ' ' || str[end] == '\t'))
		end--;
	ft_memmove(str, str + start, end - start + 1);
	str[end - start + 1] = '\0';
}
*/
