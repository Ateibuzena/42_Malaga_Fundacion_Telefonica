/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:38:17 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/17 23:37:33 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	*ft_memmove(void *dest, const void *src, int n)
{
	char		*d;
	const char	*s;
	int			i;

	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
*/
