/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:11:44 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/14 08:33:00 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		n = 0;
		while (str[n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
