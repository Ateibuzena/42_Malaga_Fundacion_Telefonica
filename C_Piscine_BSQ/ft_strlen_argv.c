/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:27:53 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 12:19:14 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_argv(char **argv, int n)
{
	int	i;

	i = 0;
	while (argv[n][i] != '\0')
	{
		i++;
	}
	return (i);
}
